/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:19:06 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/12 14:59:05 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	word;
	int	count;

	word = 0;
	count = 0;
	while (*str)
	{
		if (!ft_is_sep(*str, charset) && !word)
		{
			count++;
			word = 1;
		}
		else if (ft_is_sep(*str, charset))
			word = 0;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *str, int start, int end)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(end - start + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}

void	ft_fill_split(char **split, char *str, char *charset)
{
	int	i;
	int	n;
	int	start;
	int	end;

	i = 0;
	n = 0;
	start = 0;
	end = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], charset))
		{
			start = i;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
			end = i;
			split[n++] = ft_strdup(str, start, end);
		}
		else
			i++;
	}
	split[n] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	int		n_words;
	char	**split;
	int		i;

	n_words = ft_count_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!split)
		return (NULL);
	ft_fill_split(split, str, charset);
	i = 0;
	while (i < n_words)
	{
		if (split[i++] == NULL)
			return (NULL);
	}
	return (split);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**split;
	int		i;

	if (ac != 3)
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROG] [STR] [CHARSET]\n");
		return (2);
	}
	split = ft_split(av[1], av[2]);
	i = 0;
	while (split[i])
	{
		printf("split: %s\n", split[i++]);
	}
	return (0);
}
*/
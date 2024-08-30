/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:52:13 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 22:09:24 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	ft_count_strs(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!ft_is_separator(str[i], charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (ft_is_separator(str[i], charset))
			in_word = 0;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src, int start, int end)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(end - start + 1);
	while (start < end)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_fill_split(char **split, char *str, char *charset)
{
	int	i;
	int	n;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	n = 0;
	while (str[i])
	{
		if (!ft_is_separator(str[i], charset))
		{
			start = i;
			while (str[i] && !ft_is_separator(str[i], charset))
				i++;
			end = i;
			split[n++] = ft_strdup(str, start, end);
		}
		else
			i++;
	}
	split[n] = 0;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**split;

	count = ft_count_strs(str, charset);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split = ft_fill_split(split, str, charset);
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*charset;
	char	**split;
	int		i;

	str = "ah0Hello12World345How6are78you9";
	charset = "0123456789";
	split = ft_split(str, charset);
	i = 0;
	while (i <= 5)
	{
		printf("split: %s\n", split[i++]);
	}
	return (0);
}
*/
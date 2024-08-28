/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:17:26 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/28 14:03:26 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_joinlen(int size, char **strs, char *sep)
{
	int	i;
	int	joinlen;
	int	seplen;

	i = 0;
	joinlen = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		joinlen += ft_strlen(strs[i]);
		if (i < size - 1)
			joinlen += seplen;
		i++;
	}
	return (joinlen);
}

char	*ft_strcpy(char *dest, int *pos, char *src)
{
	int	j;

	j = *pos;
	while (*src)
		dest[j++] = *src++;
	dest[j] = '\0';
	*pos = j;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		joinlen;
	int		i;
	int		pos;

	joinlen = ft_joinlen(size, strs, sep);
	strjoin = (char *)malloc(joinlen + 1);
	i = 0;
	pos = 0;
	while (i < size)
	{
		strjoin = ft_strcpy(strjoin, &pos, strs[i]);
		if (i < size - 1)
			strjoin = ft_strcpy(strjoin, &pos, sep);
		i++;
	}
	return (strjoin);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**strs;
	int		i;

	if (ac < 3)
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [STR1] ... [SEP]\n");
	}
	strs = (char **)malloc(sizeof(char *) * (ac - 2));
	i = 0;
	while (i < (ac - 2))
	{
		strs[i] = av[i + 1];
		i++;
	}
	printf("strjoin: \"%s\"\n", ft_strjoin(ac - 2, strs, av[ac - 1]));
	return (0);
}
*/
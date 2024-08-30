/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:56:09 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 00:06:20 by joao-alm         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("str: \"%s\"\n", av[1]);
		printf("dest: \"%s\"\n", ft_strdup(av[1]));
	}
	else
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [STR]\n");
		return (1);
	}
	return (0);
}
*/
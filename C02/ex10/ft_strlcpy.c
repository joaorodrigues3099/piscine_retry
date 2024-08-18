/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:50:12 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/18 16:15:19 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	i;

	slen = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (*src && i < (size - 1))
		{
			*dest++ = *src++;
			i++;
		}
		*dest = '\0';
	}
	return (slen);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		if (atoi(av[2]) == 0)
		{
			printf("Argument [N] needs to be a number bigger than 0\n");
			return (1);
		}
		printf("src: \"%s\"\n", av[1]);
		char *dest = malloc(sizeof(av[1]));
		printf("dest_bfr: \"%s\"\n", dest);
		printf("strlcpy: %d\n", ft_strlcpy(dest, av[1], atoi(av[2])));
		printf("dest_aft: \"%s\"\n", dest);
	}
	else
	{
		printf("Invalid number of arguments.\n");
		printf("Format: ./[PROGRAM_NAME] [SRC] [N]\n");
		return (1);
	}
	return (0);
}
*/
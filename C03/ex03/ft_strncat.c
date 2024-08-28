/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:30:10 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:34:56 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && nb > 0)
	{
		dest[i++] = *src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int	n = atoi(av[3]);
		char *dest = (char *)malloc(strlen(av[1]) + n + 1);
		int i = 0;
		strcpy(dest, av[1]);
		printf("dest: \"%s\"\n", dest);
		printf("src: \"%s\"\n", av[2]);
		printf("n: %d\n", n);
		printf("strncat: \"%s\"\n", ft_strncat(dest, av[2], n));
		free (dest);
	}
	else
	{
		printf("Invalid args\n");
		printf("Format: ./[PROGRAM_NAME] [DEST] [SRC] [N]\n");
		return (1);
	}
	return (0);
}
*/
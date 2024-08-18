/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:30:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/14 15:50:30 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && i < n)
		dest[i++] = *src++;
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *dest = malloc(sizeof(av[1]));
		printf("src: %s\n", av[1]);
		printf("dest_bfr: %s\n", dest);
		printf("ft_strncpy: %s\n", ft_strncpy(dest, av[1], atoi(av[2])));
		printf("dest_aft: %s\n", dest);
	}
	return (0);
}
*/
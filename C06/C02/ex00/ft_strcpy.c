/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:39:21 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/19 02:23:57 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*dest;

	if (ac == 2)
	{
		printf("src: %s\n", av[1]);
		dest = (char *)malloc(sizeof(av[1]));
		printf("dest_bfr: %s\n", dest);
		printf("ft_strcpy: %s\n", ft_strcpy(dest, av[1]));
		printf("dest_aft: %s\n", dest);
	}
	return (0);
}
*/
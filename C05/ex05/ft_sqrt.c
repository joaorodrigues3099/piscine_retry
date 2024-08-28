/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:23:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 00:27:14 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt <= nb / sqrt && sqrt <= 46340)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = atoi(av[1]);
		printf("nb: %d\n", i);
		printf("ft_sqrt: %d\n", ft_sqrt(i));
	}
	else
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [NB]\n");
		return (1);
	}
	return (0);
}
*/
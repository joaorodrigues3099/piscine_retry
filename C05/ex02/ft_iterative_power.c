/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:11:16 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/22 13:20:27 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
	{
		res *= nb;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int nb = atoi(av[1]);
		printf("nb: %d\n", nb);
		int power = atoi(av[2]);
		printf("power: %d\n", power);
		printf("iterative_power: %d\n", ft_iterative_power(nb, power));
	}
	else
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [NB] [POWER]\n");
		return (1);
	}
	return (0);
}
*/
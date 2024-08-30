/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:29:23 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/22 13:20:49 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recursive(int nb, int res, int power)
{
	if (power > 1)
	{
		res *= nb;
		return (ft_recursive_power_recursive(nb, res, power - 1));
	}
	return (res);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (ft_recursive_power_recursive(nb, nb, power));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;
	int	power;

	if (ac == 3)
	{
		nb = atoi(av[1]);
		printf("nb: %d\n", nb);
		power = atoi(av[2]);
		printf("power: %d\n", power);
		printf("recursive_power: %d\n", ft_recursive_power(nb, power));
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:31:27 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/27 12:49:19 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	if (nb % 2 == 0 && 2 > nb)
		return (ft_find_next_prime(nb + 1));
	while (i * i <= nb)
	{
		if (nb % i++ == 0)
			return (ft_find_next_prime(nb + 1));
	}
	return (nb);
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
		printf("ft_find_next__prime: %d\n", ft_find_next_prime(i));
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
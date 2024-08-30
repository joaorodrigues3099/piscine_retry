/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:15:06 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/23 18:29:35 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
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
		printf("ft_is_prime: %d\n", ft_is_prime(i));
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
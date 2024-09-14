/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:38:47 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/14 15:28:01 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		res *= nb--;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		printf("nb: %d\n", nb);
		printf("factorial: %d\n", ft_iterative_factorial(nb));
	}
	else
	{
		printf("Invalid args\n");
		printf("Format: ./[PROGRAM] [NB]\n");
		return (1);
	}
	return (0);
}
*/
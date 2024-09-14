/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:48:03 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/12 17:07:01 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recursive(int factorial, int nb)
{
	if (nb > 0)
	{
		factorial *= nb--;
		return (ft_recursive_factorial_recursive(factorial, nb));
	}
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
		return (ft_recursive_factorial_recursive(1, nb));
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
		printf("fact: %d\n", ft_recursive_factorial(nb));
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:21:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/29 00:27:08 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_recursive(int nb, int nb2, int index)
{
	if (index > 1)
	{
		return (ft_fibonacci_recursive(nb2, nb2 + nb, index - 1));
	}
	return (nb2);
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (ft_fibonacci_recursive(0, 1, index));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	index;

	if (ac == 2)
	{
		index = atoi(av[1]);
		printf("nb: %d\n", index);
		printf("ft_fibonnaci: %d\n", ft_fibonacci(index));
	}
	else
	{
		printf("Invalid args.\n");
		printf("Format: ./[PROGRAM] [INDEX]\n");
		return (1);
	}
	return (0);
}
*/
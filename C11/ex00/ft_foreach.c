/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:20:43 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/06 23:32:05 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	ft_print(int nb)
{
	printf("%d\n", nb);
}

int	main(int ac, char **av)
{
	int	*tab;
	int	i;

	if (ac < 2)
	{
		printf("Usage: ft_foreach <nb1> [nb2 ...]\n");
		return (1);
	}
	i = 0;
	tab = malloc(sizeof(int) * (ac - 1));
	if (!tab)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	while (i++ < ac - 1)
		tab[i - 1] = atoi(av[i]);
	ft_foreach(tab, ac - 1, &ft_print);
	return (0);
}
*/
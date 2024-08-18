/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:47:15 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/14 14:29:30 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	swap = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i++] = swap;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int tab[ac - 1];
	
	i = 0;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			tab[i] = atoi(av[i + 1]);
			i++;
		}
	}
	ft_rev_int_tab(tab, ac - 1);
	i = 0;
	while (i < ac - 1)
	{
		printf("rev_int_tab[%d]: %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
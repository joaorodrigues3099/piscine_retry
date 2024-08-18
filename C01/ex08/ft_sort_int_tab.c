/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:07:25 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/14 14:32:00 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	if (size == 0)
		return ;
	i = 0;
	swap = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
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
		printf("tab = {");
		while (i < ac - 1)
		{
			tab[i] = atoi(av[i + 1]);
			printf("%d", tab[i]);
			if (i != ac - 2)
				printf(", ");
			i++;
		}
		printf("};\n");
		ft_sort_int_tab(tab, ac - 1);
		i = 0;
		printf("sort_int_tab = {");
		while (i < ac - 1)
		{
			printf("%d", tab[i]);
			if (i != ac - 2)
				printf(", ");
			i++;
		}
		printf("};\n");
	}
}
*/
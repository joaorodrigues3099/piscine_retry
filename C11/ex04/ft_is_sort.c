/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:48:57 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/07 18:13:12 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < lenght)
	{
		j = i + 1;
		while (j < lenght)
		{
			if ((*f)(tab[i], tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_intcmp(int n1, int n2)
{
	return (n1 - n2);
}

int	main(int ac, char **av)
{
	int *tab;
	int i;

	if (ac < 2)
	{
		printf("Usage: ft_map <nb1> [nb2 ...]\n");
		return (1);
	}
	tab = malloc(sizeof(int) * (ac - 1));
	if (!tab)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < ac - 1)
	{
		tab[i] = atoi(av[i + 1]);
		i++;
	}
	printf("ft_is_sort: %d\n", ft_is_sort(tab, ac - 1, &ft_intcmp));
	return (0);
}
*/
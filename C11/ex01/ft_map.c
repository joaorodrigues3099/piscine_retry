/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 23:34:53 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/07 17:02:23 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*result;
	int	i;

	if (tab == NULL)
		return (NULL);
	result = malloc(sizeof(int) * lenght);
	i = 0;
	while (i < lenght)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
/*
# include <stdio.h>

int	ft_times_ten(int nb)
{
	return (nb * 10);
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
	tab = ft_map(tab, ac - 1, &ft_times_ten);
	i = 0;
	while (i < ac - 1)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/
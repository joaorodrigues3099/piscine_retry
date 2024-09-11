/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:45:57 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/09 20:28:49 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_str(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap_str(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac < 2)
	{
		printf("Usage: ft_sort_string_tab <str1> [str2 ...]\n");
		return (1);
	}
	tab = malloc(sizeof(char *) * ac);
	if (!tab)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < ac - 1)
	{
		tab[i] = av[i + 1];
		i++;
	}
	av[i] = 0;
	ft_sort_string_tab(tab);
	i = 0;
	while (i < ac - 1)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/
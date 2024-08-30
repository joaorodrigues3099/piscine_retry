/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:04:59 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/27 18:54:39 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
}

void	ft_print(int ac, char **av)
{
	int		i;
	char	*print;

	i = 1;
	while (i < ac)
	{
		print = av[i];
		while (*print)
			write(1, print++, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_sort(ac, av);
		ft_print(ac, av);
	}
	return (0);
}

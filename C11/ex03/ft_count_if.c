/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:34:01 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/12 15:00:12 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < lenght)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	ft_is_numeric(char *str)
{
	while (*str)
	{
		if (*str <= '0' || *str >= '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		printf("Usage: ft_any <str1> [str2 ...]\n");
		return (1);
	}
	printf("ft_any: %d\n", ft_count_if(av, ac - 1, &ft_is_numeric));
	return (0);
}
*/
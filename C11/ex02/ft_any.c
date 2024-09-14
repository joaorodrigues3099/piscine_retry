/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:06:28 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/12 14:59:42 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
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

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		printf("Usage: ft_any <str1> [str2 ...]\n");
		return (1);
	}
	printf("ft_any: %d\n", ft_any(av, &ft_is_numeric));
	return (0);
}
*/
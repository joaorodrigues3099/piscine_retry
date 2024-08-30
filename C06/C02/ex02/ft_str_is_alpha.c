/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:53:49 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/14 16:00:59 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
			res = 0;
		str++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("str: %s\n", av[1]);
		printf("str_is_alpha: %d\n", ft_str_is_alpha(av[1]));
	}
	return (0);
}
*/
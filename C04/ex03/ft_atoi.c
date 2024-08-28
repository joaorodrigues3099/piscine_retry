/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:56:18 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:01:53 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\r' || *str == '\t')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("atoi: %d\n", ft_atoi(av[1]));
	}
	else {
		char *str = "Invalid args\n";
		write(2, str, strlen(str));
		str = "Format: ./[PROGRAM] [NB]\n";
		write(2, str, strlen(str));
		return (1);
	}
	return (0);
}
*/
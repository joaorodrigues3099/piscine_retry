/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:54:31 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/09 16:53:54 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	while (*str == ' ' || *str == '\r' || *str == '\t')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (result * sign);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('0' + 8);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
		ft_putchar('0' + nb);
}

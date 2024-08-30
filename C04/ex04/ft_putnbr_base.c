/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:22:37 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/20 20:56:05 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_valid(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len < 2)
		return (0);
	while (i < len)
	{
		if (str[i] == '-' || str[i] == '+' || str[i] < 33)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (ft_is_valid(base, len) == 0)
		return ;
	if (nb == -2147483648)
	{
		ft_putnbr_base(-nb / len, base);
		ft_putchar(base[nb % len]);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb, base);
		return ;
	}
	if (nb > len - 1)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 3)
	{
		ft_putnbr_base(atoi(av[1]), av[2]);
		write(1, "\n", 1);
	}
	else
	{
		str = "Invalid args\n";
		write(2, str, strlen(str));
		str = "Format: ./[PROGRAM] [NB] [BASE]\n";
		write(2, str, strlen(str));
		return (1);
	}
	return (0);
}
*/
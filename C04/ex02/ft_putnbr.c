/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:28:51 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:29:51 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
/*
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2) {
		ft_putnbr(atoi(av[1]));
		write(1, "\n", 1);
	}
	else {
		char *str = "Invalid args\n";
		write(1, str, strlen(str));
		str = "Format: ./[PROGRAM_NAME] [NB]\n";
		write(1, str, strlen(str));
	}
}
*/
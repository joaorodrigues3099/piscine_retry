/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:25:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/20 11:55:29 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/*
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2) {
		ft_putstr(av[1]);
		write(1, "\n", 1);
	}
	else {
		char *str = "Invalid args\n";
		write(2, str, strlen(str));
		str = "Format: ./[PROGRAM_NAME] [STR]\n";
		write(2, str, strlen(str));
		return (1);
	}
	return (0);
}
*/
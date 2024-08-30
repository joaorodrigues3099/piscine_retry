/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:31:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/05 18:28:20 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] != '\0')
			ft_putchar(*av[1]++);
		ft_putchar('\n');
	}
	return (0);
}
*/

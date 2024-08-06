/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:36:49 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/05 19:50:43 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
		c = 'N';
	write(1, &c, 1);
}
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_is_negative(atoi(av[1]));
		write(1, "\n", 1);
	}
	return (0);
}
*/
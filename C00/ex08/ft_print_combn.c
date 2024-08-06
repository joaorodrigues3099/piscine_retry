/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:35:23 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/06 16:49:46 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_recursive(int n, char nxt_digit, char *buf, int pos)
{
	char	i;
	char	maxv_pos0;
	char	maxv_posn;

	maxv_pos0 = '9' + 1 - n;
	if (pos == n)
	{
		write(1, buf, n);
		if (buf[0] != maxv_pos0)
			write(1, ", ", 2);
		return ;
	}
	i = nxt_digit;
	maxv_posn = '9' + 1 - n + pos;
	while (i <= maxv_posn)
	{
		buf[pos] = i;
		ft_print_recursive(n, i + 1, buf, pos + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	if (n > 0 && n < 10)
		ft_print_recursive(n, '0', buf, 0);
}
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_combn(atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
*/
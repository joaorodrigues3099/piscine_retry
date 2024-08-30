/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:25:10 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:33:20 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combn_recurive(int n, char nxt, char *buf, int pos)
{
	char	i;

	if (pos == n)
	{
		write(1, buf, n);
		if (buf[0] < '9' + 1 - n)
			write(1, ", ", 2);
		return ;
	}
	i = nxt;
	while (i <= '9' + 1 - n + pos)
	{
		buf[pos] = i;
		ft_combn_recurive(n, i + 1, buf, pos + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	if (n > 0 && n < 10)
		ft_combn_recurive(n, '0', buf, 0);
}
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_combn(atoi(av[1]));
	return (0);
}
*/
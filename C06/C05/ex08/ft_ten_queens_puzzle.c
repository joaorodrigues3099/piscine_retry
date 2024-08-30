/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:44:48 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/27 12:51:18 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *buf)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + buf[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_valid(int *buf, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (buf[i] == row || (i - col == buf[i] - row) || (col - i == buf[i]
				- row))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int *buf, int col, int *count)
{
	int	row;

	if (col == 10)
	{
		ft_print(buf);
		*count += 1;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_valid(buf, col, row))
		{
			buf[col] = row;
			ft_solve(buf, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	buf[10];
	int	count;

	count = 0;
	ft_solve(buf, 0, &count);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("count: %d\n", ft_ten_queens_puzzle());
	return (0);
}
*/
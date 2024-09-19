/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:00:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:19:53 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_grid_complete(t_board *board)
{
	int	i;
	int	j;

	j = 0;
	while (j < board->size)
	{
		i = 0;
		while (i < board->size)
		{
			if (!board->grid[j][i])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

void	ft_next_cell(int size, t_cell *cell)
{
	cell->x += 1;
	if (cell->x == size)
	{
		cell->x = 0;
		cell->y += 1;
	}
}

void	ft_prev_cell(int size, t_cell *cell)
{
	cell->x -= 1;
	if (cell->x == -1)
	{
		cell->x = size - 1;
		cell->y -= 1;
	}
}

int	**ft_solver(t_board *board, t_cell *cell)
{
	int	value;

	if (ft_grid_complete(board))
		return (board->grid);
	value = 1;
	while (value <= board->size)
	{
		board->grid[cell->y][cell->x] = value;
		if (ft_verify(board, cell))
		{
			ft_next_cell(board->size, cell);
			if (ft_solver(board, cell))
				return (board->grid);
			ft_prev_cell(board->size, cell);
		}
		board->grid[cell->y][cell->x] = 0;
		value++;
	}
	return (0);
}

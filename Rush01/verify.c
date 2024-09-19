/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:47:57 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:19:55 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_up(t_board *board, t_cell *cell)
{
	int	clue;
	int	visible;
	int	highest;
	int	i;

	visible = 0;
	highest = 0;
	i = 0;
	while (i < board->size)
	{
		if (board->grid[i][cell->x] > highest)
		{
			highest = board->grid[i][cell->x];
			visible++;
		}
		i++;
	}
	clue = board->clues[0][cell->x];
	if (cell->y == board->size - 1 && visible == clue)
		return (1);
	if (cell->y < board->size - 1 && visible <= clue)
		return (1);
	return (0);
}

int	ft_down(t_board *board, t_cell *cell)
{
	int	clue;
	int	visible;
	int	highest;
	int	i;

	visible = 0;
	highest = 0;
	i = board->size - 1;
	while (i >= 0)
	{
		if (board->grid[i][cell->x] > highest)
		{
			highest = board->grid[i][cell->x];
			visible++;
		}
		i--;
	}
	clue = board->clues[1][cell->x];
	if (cell->y == board->size - 1 && visible == clue)
		return (1);
	if (cell->y < board->size - 1)
		return (1);
	return (0);
}

int	ft_left(t_board *board, t_cell *cell)
{
	int	clue;
	int	visible;
	int	highest;
	int	i;

	visible = 0;
	highest = 0;
	i = 0;
	while (i < board->size)
	{
		if (board->grid[cell->y][i] > highest)
		{
			highest = board->grid[cell->y][i];
			visible++;
		}
		i++;
	}
	clue = board->clues[2][cell->y];
	if (cell->x == board->size - 1 && visible == clue)
		return (1);
	if (cell->x < board->size - 1 && visible <= clue)
		return (1);
	return (0);
}

int	ft_right(t_board *board, t_cell *cell)
{
	int	clue;
	int	visible;
	int	highest;
	int	i;

	visible = 0;
	highest = 0;
	i = board->size - 1;
	while (i >= 0)
	{
		if (board->grid[cell->y][i] > highest)
		{
			highest = board->grid[cell->y][i];
			visible++;
		}
		i--;
	}
	clue = board->clues[3][cell->y];
	if (cell->x == board->size - 1 && visible == clue)
		return (1);
	if (cell->x < board->size - 1)
		return (1);
	return (0);
}

int	ft_verify(t_board *board, t_cell *cell)
{
	int	i;

	i = 0;
	while (i < board->size)
	{
		if (i != cell->x
			&& board->grid[cell->y][i] == board->grid[cell->y][cell->x])
			return (0);
		i++;
	}
	i = 0;
	while (i < board->size)
	{
		if (i != cell->y
			&& board->grid[i][cell->x] == board->grid[cell->y][cell->x])
			return (0);
		i++;
	}
	if (!ft_up(board, cell) || !ft_down(board, cell) || !ft_left(board, cell)
		|| !ft_right(board, cell))
		return (0);
	return (1);
}

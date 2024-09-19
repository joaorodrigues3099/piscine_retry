/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:08:28 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:14:47 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_square_size(char *input)
{
	int	i;
	int	lenght;

	i = 4;
	lenght = ft_strlen(input);
	while (i <= 9)
	{
		if (lenght == (i * 4 * 2 - 1))
			return (i);
		i++;
	}
	return (0);
}

void	ft_display(int **grid, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(grid[i][j] + 48);
			if (j < size - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	t_board	*board;
	t_cell	*cell;
	int		size;

	if (ac != 2)
		ft_exit_with_error();
	size = ft_square_size(av[1]);
	if (!size)
		ft_exit_with_error();
	board = (t_board *)malloc(sizeof(t_board));
	if (!board)
		ft_exit_with_error();
	board->size = size;
	board->clues = ft_clues(av[1], board->size);
	board->grid = ft_grid(board->size);
	cell = (t_cell *)malloc(sizeof(t_cell));
	cell->x = 0;
	cell->y = 0;
	board->grid = ft_solver(board, cell);
	if (!board->grid)
		ft_exit_with_error();
	ft_display(board->grid, board->size);
}

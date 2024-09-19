/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:19 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/19 16:19:44 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_board
{
	int	**clues;
	int	**grid;
	int	size;
}		t_board;

typedef struct s_cell
{
	int	x;
	int	y;
}		t_cell;

// string.c
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_exit_with_error(void);
// input.c
int		**ft_clues(char *input, int size);
// grid.c
int		**ft_grid(int size);
// solver.c
int		**ft_solver(t_board *board, t_cell *cell);
// verify.c
int		ft_verify(t_board *board, t_cell *cell);

#endif
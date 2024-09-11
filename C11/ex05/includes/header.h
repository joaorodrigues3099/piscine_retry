/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:28:38 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/09 16:47:23 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(int fd, char *str);
int			ft_atoi(char *str);
void		ft_putnbr(int nb);

int			ft_sum(int n1, int n2);
int			ft_subtract(int n1, int n2);
int			ft_divide(int n1, int n2);
int			ft_multiply(int n1, int n2);
int			ft_modulos(int n1, int n2);

typedef int	(*t_op_ft)(int, int);

#endif
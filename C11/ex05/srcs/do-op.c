/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:26:22 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/09 16:53:27 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_fill_operators(t_op_ft *ft_operators)
{
	ft_operators[0] = &ft_sum;
	ft_operators[1] = &ft_subtract;
	ft_operators[2] = &ft_divide;
	ft_operators[3] = &ft_multiply;
	ft_operators[4] = &ft_modulos;
}

void	ft_fill_signs(char *signs)
{
	signs[0] = '+';
	signs[1] = '-';
	signs[2] = '/';
	signs[3] = '*';
	signs[4] = '%';
}

int	ft_calculate(int n1, int n2, int (*f)(int, int))
{
	return ((*f)(n1, n2));
}

int	ft_handle_args(char **av, t_op_ft *operators_ft, int sign_i)
{
	int		n1;
	int		n2;
	t_op_ft	sign;

	n1 = ft_atoi(av[1]);
	n2 = ft_atoi(av[3]);
	sign = operators_ft[sign_i];
	if (sign_i == 2 && n2 == 0)
	{
		ft_putstr(2, "Stop : division by zero\n");
		return (0);
	}
	else if (sign_i == 4 && n2 == 0)
	{
		ft_putstr(2, "Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(ft_calculate(n1, n2, sign));
	ft_putstr(1, "\n");
	return (1);
}

int	main(int ac, char **av)
{
	t_op_ft	operators_ft[5];
	char	signs[5];
	int		i;

	if (ac != 4)
		return (1);
	ft_fill_operators(operators_ft);
	ft_fill_signs(signs);
	i = 0;
	while (i < 5)
	{
		if (av[2][0] == signs[i])
			break ;
		i++;
	}
	if (i == 5)
	{
		ft_putstr(2, "0\n");
		return (1);
	}
	if (!ft_handle_args(av, operators_ft, i))
		return (1);
	return (0);
}

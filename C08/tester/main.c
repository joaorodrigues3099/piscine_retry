/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:51:17 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/12 14:58:50 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	main(int ac, char **av)
{
	t_stock_str	*stock;

	stock = ft_strs_to_tab(ac, av);
	ft_show_tab(stock);
	return (0);
}

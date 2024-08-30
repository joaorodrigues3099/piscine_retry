/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:35:10 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/30 23:29:36 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(str) + 1);
	if (!dest)
		free(dest);
	i = 0;
	while (*str)
		dest[i++] = *str++;
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock_str;
	int					i;

	stock_str = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac
				+ 1));
	if (!stock_str)
		free(stock_str);
	i = 0;
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		if (stock_str[i].copy == NULL)
		{
			while (i-- > 0)
				free(stock_str[i].copy);
		}
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}

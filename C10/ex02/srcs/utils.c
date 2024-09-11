/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:20:44 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/05 22:40:23 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_write_error(char *filename, int errnb)
{
	ft_putstr(2, "ft_tail: cannot open '");
	ft_putstr(2, filename);
	ft_putstr(2, "' for reading: ");
	ft_putstr(2, strerror(errnb));
	ft_putstr(2, "\n");
}

size_t	ft_sizet_atoi(char *str)
{
	size_t	nb;

	nb = 0;
	while (*str == ' ' || *str == 'r' || *str == 't')
		str++;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - '0';
	return (nb);
}

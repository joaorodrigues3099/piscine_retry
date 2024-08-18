/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:19:17 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/18 18:38:58 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[((unsigned char)*str) / 16]);
			ft_putchar("0123456789abcdef"[((unsigned char)*str) % 16]);
		}
		str++;
	}
}
/*
int	main(void)
{	
	ft_putstr_non_printable("Hello/r World/t!");
	return (0);
}
*/
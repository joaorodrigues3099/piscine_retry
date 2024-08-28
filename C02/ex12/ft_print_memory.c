/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:01 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/21 13:34:34 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_addr(unsigned char *addr)
{
	unsigned long	l;
	char			buf[17];
	int				i;

	l = (unsigned long)addr;
	buf[16] = '\0';
	i = 15;
	while (l > 0)
	{
		buf[i--] = "0123456789abcdef"[l % 16];
		l /= 16;
	}
	while (i >= 0)
		buf[i--] = '0';
	write(1, buf, 16);
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *addr, int rem)
{
	char	buf[40];
	int		i;
	int		j;

	i = 0;
	while (i < 40)
		buf[i++] = ' ';
	i = 0;
	j = 0;
	while (i < 40 && j < rem)
	{
		buf[i++] = "0123456789abcdef"[addr[j] / 16];
		buf[i++] = "0123456789abcdef"[addr[j] % 16];
		if ((j % 2) != 0)
			i++;
		j++;
	}
	write(1, buf, 40);
}

void	ft_print_str(unsigned char *addr, int rem)
{
	int	i;

	i = 0;
	while (i < 16 && i < rem)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, addr + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_print_addr(addr + i);
		ft_print_hex(addr + i, size - i);
		ft_print_str(addr + i, size - i);
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	char	*str;

	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce \
	qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	int	i = 69;
	write(1, str, 92);
	write(1, "\n", 1);
	ft_print_memory(&i, 1000);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:21:32 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/06 15:27:54 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_write_bytes(int fd, char *buffer, size_t n_bytes)
{
	size_t	bytes_read;
	size_t	total_read;
	size_t	start;

	total_read = 0;
	start = 0;
	bytes_read = read(fd, buffer + total_read % n_bytes, n_bytes - total_read
			% n_bytes);
	while (bytes_read > 0)
	{
		total_read += bytes_read;
		bytes_read = read(fd, buffer + total_read % n_bytes, n_bytes
				- total_read % n_bytes);
	}
	if (total_read >= n_bytes)
		start = total_read % n_bytes;
	else
		start = 0;
	if (total_read > n_bytes)
		write(1, buffer + start, n_bytes - start);
	write(1, buffer, start);
	if (buffer[0])
		write(1, "\n", 1);
	close(fd);
}

void	ft_read_file(int header, char *filename, char *buffer, size_t n_bytes)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_write_error(filename, errno);
		return ;
	}
	if (header)
	{
		ft_putstr(1, "==> ");
		ft_putstr(1, filename);
		ft_putstr(1, " <==\n");
	}
	ft_write_bytes(fd, buffer, n_bytes);
	close(fd);
}

void	ft_tail(size_t n_bytes, int ac, char **av)
{
	char	*buffer;
	int		i;

	buffer = malloc(n_bytes + 1);
	if (!buffer)
	{
		ft_putstr(2, "Memory allocation failed.\n");
		return ;
	}
	buffer[n_bytes] = '\0';
	i = 3;
	if (ac == 3)
		ft_write_bytes(0, buffer, n_bytes);
	else if (ac == 4)
		ft_read_file(0, av[3], buffer, n_bytes);
	else
	{
		while (i < ac)
		{
			ft_read_file(1, av[i], buffer, n_bytes);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	size_t	n_bytes;

	if (ac < 3 || av[1][0] != '-' || av[1][1] != 'c')
	{
		ft_putstr(2, "Usage: ft_tail -c <n_bytes> [file 1] [file 2 ...]\n");
		return (1);
	}
	n_bytes = ft_sizet_atoi(av[2]);
	if (!n_bytes)
	{
		ft_putstr(2, "ft_tail: invalid number of bytes\n");
		return (1);
	}
	ft_tail(n_bytes, ac, av);
	return (0);
}

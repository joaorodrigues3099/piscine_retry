/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:14 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/03 19:33:03 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 29950

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_show_error(char *program, char *filename, char *error)
{
	ft_putstr(2, basename(program));
	ft_putstr(2, ": ");
	ft_putstr(2, basename(filename));
	ft_putstr(2, ": ");
	ft_putstr(2, error);
}

void	ft_read_file(char *program, char *filename)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	size_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_show_error(program, filename, strerror(errno));
		write(2, "\n", 1);
		close(fd);
		return ;
	}
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, BUFFER_SIZE);
	}
	write(1, "\n", 1);
	close(fd);
}

void	ft_read_stdin(void)
{
	char	buf[BUFFER_SIZE];
	size_t	bytes_read;

	bytes_read = read(0, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(0, buf, BUFFER_SIZE);
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		ft_read_stdin();
	else
	{
		while (i < ac)
			ft_read_file(av[0], av[i++]);
	}
	return (0);
}

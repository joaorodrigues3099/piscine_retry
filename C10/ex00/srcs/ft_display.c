/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:33:07 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/03 18:51:20 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int	ft_return_error(char *str)
{
	while (*str)
		write(2, str++, 1);
	return (2);
}

int	ft_dislpay_file(const char *filename)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	size_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (fd);
	}
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, BUFFER_SIZE);
	}
	close(fd);
	return (fd);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (ft_return_error("File name missing.\n"));
	if (ac > 2)
		return (ft_return_error("Too many arguments.\n"));
	if (ft_dislpay_file(av[1]) < 0)
		return (ft_return_error("Cannot read file.\n"));
	return (0);
}

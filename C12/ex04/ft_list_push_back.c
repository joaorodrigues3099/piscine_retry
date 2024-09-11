/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:39:31 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/11 00:09:43 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*current;

	if (!begin_list)
		return (begin_list);
	current = begin_list;
	while (current->next)
		current = current->next;
	return (current);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*last_elem;

	new_elem = ft_create_elem(data);
	if (!new_elem)
		return ;
	last_elem = ft_list_last(*begin_list);
	if (!last_elem)
		*begin_list = new_elem;
	else
		last_elem->next = new_elem;
}
/*
#include <stdio.h>

void	ft_print_node(t_list *header)
{
	t_list	*current;

	current = header;
	while (current)
	{
		printf("%s -> ", (char *)current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(int ac, char **av)
{
	t_list *header;
	int i;

	header = 0;
	i = 1;
	while (i < ac)
	{
		ft_list_push_back(&header, av[i]);
		i++;
	}
	ft_print_node(header);
	return (0);
}
*/
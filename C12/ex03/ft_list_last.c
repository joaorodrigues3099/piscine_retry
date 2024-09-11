/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:44:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/10 22:55:29 by joao-alm         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->data = data;
	element->next = NULL;
	return (element);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;

	new_element = ft_create_elem(data);
	if (!new_element)
		return ;
	new_element->next = *begin_list;
	*begin_list = new_element;
}

int	main(int ac, char **av)
{
	t_list	*header;
	int		i;

	header = NULL;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&header, av[i]);
		i++;
	}
	printf("ft_list_last: %s\n", (char *)ft_list_last(header)->data);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:24:01 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/10 21:42:39 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
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
	t_list	*head;
	int		i;

	head = NULL;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&head, av[i]);
		i++;
	}
	printf("ft_list_size: %d\n", ft_list_size(head));
	return (0);
}
*/
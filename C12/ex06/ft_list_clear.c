/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:33:55 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/11 18:58:49 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		next = current->next;
		free_fct(current->data);
		free(current);
		current = next;
	}
}
/*
#include <stdio.h>
#include <string.h>

void	ft_free_ft(void *ptr)
{
	free(ptr);
}

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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*new_elem;
	int		i;

	head = 0;
	i = 0;
	while (i < size)
	{
		char *data_copy = strdup(strs[i]);
		if (!data_copy)
			return (NULL);
		new_elem = ft_create_elem(data_copy);
		if (!new_elem)
			return (0);
		new_elem->next = head;
		head = new_elem;
		i++;
	}
	return (head);
}

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
	t_list	*head;

	head = ft_list_push_strs(ac - 1, av + 1);
	printf("List bfr:\n");
	ft_print_node(head);
	ft_list_clear(head, &ft_free_ft);
	head = NULL;
	printf("List aft:\n");
	ft_print_node(head);
	return (0);
}
*/
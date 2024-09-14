/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:46:41 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/14 15:28:44 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	if (!begin_list || !*begin_list)
		return ;
	previous = NULL;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		if (!(*cmp)(current->data, data_ref))
		{
			if (!previous)
				*begin_list = next;
			else
				previous->next = next;
			(*free_fct)(current->data);
			free(current);
		}
		else
			previous = current;
		current = next;
	}
}
/*
#include <stdio.h>
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*new_elem;
	int		i;
	char	*data_cpy;

	head = 0;
	i = 0;
	while (i < size)
	{
		data_cpy = strdup(strs[i]);
		if (!data_cpy)
			return (NULL);
		new_elem = ft_create_elem(data_cpy);
		if (!new_elem)
			return (0);
		new_elem->next = head;
		head = new_elem;
		i++;
	}
	return (head);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_free_data(void *data)
{
	free(data);
}

void	ft_print_list(t_list *head)
{
	t_list	*current;

	current = head;
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

	head = ft_list_push_strs(ac - 2, av + 2);
	printf("list_bfr: ");
	ft_print_list(head);
	ft_list_remove_if(&head, av[1], &ft_strcmp, &ft_free_data);
	printf("list_aft: ");
	ft_print_list(head);
	return (0);
}
*/
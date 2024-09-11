/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:05:58 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/09 21:34:29 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
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
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*node;

	if (ac != 2)
	{
		printf("Usage: ft_create_elem <str>\n");
		return (1);
	}
	node = ft_create_elem(av[1]);
	if (!node)
	{
		printf("Failed to create new node\n");
		return (1);
	}
	printf("Node data: %s\n", (char *)node->data);
	if (!node->next)
		printf("Node pointer is NULL\n");
	else
		printf("Node pointer is not NULL\n");
	free(node);
	return (0);
}
*/

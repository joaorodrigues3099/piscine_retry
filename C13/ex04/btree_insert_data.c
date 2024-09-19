/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:41:19 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/18 12:20:51 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *,
			void *))
{
	int	cmp;

	if (!*root)
	{
		*root = btree_create_node(item);
		if (!*root)
			return ;
	}
	else
	{
		cmp = cmpf(item, (*root)->item);
		if (cmp < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}

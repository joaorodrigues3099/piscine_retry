/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:04:47 by joao-alm          #+#    #+#             */
/*   Updated: 2024/09/16 20:16:26 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	void	*found;

	if (!root)
		return (0);
	found = btree_search_item(root->left, data_ref, cmpf);
	if (found)
		return (found);
	if (cmpf(data_ref, root->item) == 0)
		return (root);
	return (btree_search_item(root->right, data_ref, cmpf));
}

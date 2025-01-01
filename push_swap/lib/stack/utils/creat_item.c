/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_item.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 21:29:50 by sel-mlil          #+#    #+#             */
/*   Updated: 2025/01/01 22:06:23 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_item	*creat_item(int value)
{
	t_item	*item;

	item = (t_item *)malloc(sizeof(t_item));
	if (!item)
		return (NULL);
	item->value = value;
	item->index = 0;
	item->next = NULL;
	item->prev = NULL;
	return (item);
}
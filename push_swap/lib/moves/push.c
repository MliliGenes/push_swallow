/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:25:55 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/12/29 20:19:54 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

static void	push(t_item **dest, t_item **src)
{
	t_item	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	tmp->next = *dest;
	if (*dest)
		(*dest)->prev = tmp;
	*dest = tmp;
}

void	pa(t_item **head_a, t_item **head_b)
{
	push(head_a, head_b);
}

void	pb(t_item **head_b, t_item **head_a)
{
	push(head_b, head_a);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 05:38:30 by sel-mlil          #+#    #+#             */
/*   Updated: 2025/01/05 22:24:53 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	clear_list(t_item *stack)
{
	t_item	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = (stack)->next;
		free(tmp);
	}
}

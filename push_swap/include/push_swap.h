/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:50:38 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/12/31 13:30:04 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./lib/moves/moves.h"
# include <stdlib.h>

typedef struct s_item
{
	int				val;
	int				index;
	int				cost;
	int				cheapest;
	struct s_item	*target;
	struct s_item	*next;
	struct s_item	*prev;
}					t_item;

// typedef struct s_move
// {
// 	char			*move;
// }					t_move;

#endif
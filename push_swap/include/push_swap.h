/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:50:38 by sel-mlil          #+#    #+#             */
/*   Updated: 2025/01/01 23:29:37 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_item
{
	int				value;
	int				index;
	struct s_item	*next;
	struct s_item	*prev;
}					t_item;

typedef char		*t_move;

# include "../lib/parser/parser.h"
# include "../lib/stack/moves/moves.h"

#endif
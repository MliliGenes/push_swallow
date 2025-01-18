/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:21:00 by sel-mlil          #+#    #+#             */
/*   Updated: 2025/01/18 19:05:25 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/game.h"
#include <stdio.h>


int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc != 2)
		return (EXIT_FAILURE);
	game = init_game_struct();
	if (!game)
		return (EXIT_FAILURE);
	if (!parser(argv[1], &(game->map)))
		return (error("BAD MAP FIX IT !!!"), free(game), EXIT_FAILURE);
	convert_map(&game);
	start_game(&game);
	return (EXIT_FAILURE);
}

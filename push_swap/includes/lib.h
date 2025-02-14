/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:32:15 by sel-mlil          #+#    #+#             */
/*   Updated: 2025/01/06 00:56:10 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_item
{
	int				value;
	int				index;
	struct s_item	*next;
	struct s_item	*prev;
}					t_item;

// messages
void				error(void);
void				ok(void);
void				ko(void);

// parser
char				*ft_strchr(const char *s, char c);
int					ft_strcmp(char *a, char *b);
long				ft_atol(const char *nptr, int *is_valid);
char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(const char *s);
int					ft_word_count(char *s, char sep);
char				*ft_holy_joint(char **argv);
int					ft_validate(char *joined_argv);
int					ft_validate_args(char **num);
int					ft_str_to_int(int **int_arr, char ***strs, int ints);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_free_split(char **split);
int					ft_int_to_stack(int *arr, t_item **stack, int size);
int					parser(char **argv, t_item **head);

// stack
void				sa(t_item **head, int print);
void				sb(t_item **head, int print);
void				ss(t_item **head_a, t_item **head_b, int print);
void				pa(t_item **head_a, t_item **head_b, int print);
void				pb(t_item **head_b, t_item **head_a, int print);
void				ra(t_item **head_a, int print);
void				rb(t_item **head_b, int print);
void				rr(t_item **head_a, t_item **head_b, int print);
void				rra(t_item **head_a, int print);
void				rrb(t_item **head_b, int print);
void				rrr(t_item **head_a, t_item **head_b, int print);
t_item				*create_item(int value);
void				add_back(t_item *head, t_item *new_item);
int					find_max_by_index(t_item *head);
int					find_min_by_index(t_item *head);
int					list_size(t_item *head);
void				clear_list(t_item *stack);

// sort
void				sort(t_item **stack_a, t_item **stack_b);
void				push_to_b(t_item **stack_a, t_item **stack_b);
void				push_back_to_a(t_item **stack_a, t_item **stack_b);
int					is_sorted(t_item *stack_a);
int					has_nums_in_range(t_item *stack_a, int range_start,
						int range_end);

// execution
void				execution(t_item **stack_a, t_item **stack_b, char *move);

#endif
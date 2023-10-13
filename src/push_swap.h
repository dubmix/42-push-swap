/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:59:27 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:17:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				pos;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int number);
int				ft_lstsize(t_list *lst);
long			ft_atoi(const char *str);
char			**ft_split(char const *s, char c);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size);

int				ft_swap(t_list **stack);
int				sa(t_list **stack_a);
int				sb(t_list **stack_b);
int				ss(t_list **stack_a, t_list **stack_b);
int				ft_push(t_list **stack_from, t_list **stack_to);
int				pa(t_list **stack_a, t_list **stack_b);
int				pb(t_list **stack_a, t_list **stack_b);
int				ft_rotate(t_list **stack);
int				ra(t_list **stack_a);
int				rb(t_list **stack_b);
int				rr(t_list **stack_a, t_list **stack_b);
int				ft_reverse_rotate(t_list **stack);
int				rra(t_list **stack_a);
int				rrb(t_list **stack_b);
int				rrr(t_list **stack_a, t_list **stack_b);

int				check_args(int argc, char **args);
void			ft_check_args(t_list **stack_a, t_list **stack_b,
					int argc, char **args);
void			simple_sort(t_list **stack_a, t_list **stack_b);
void			complex_sort(t_list **stack_a, t_list **stack_b);
void			index_stack(t_list **stack);
void			set_pos(t_list **stack);
int				find_pos(t_list **stack, int top, int bottom);
int				number_in_chunk(t_list **stack, int chunk_size, int size);
int				get_chunk_size(int size);
int				is_sorted(t_list **stack);
int				get_min(t_list **stack);
int				get_min_index(t_list **stack, int min);
void			free_split(char **str);
void			free_stack(t_list **stack);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:28:29 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 17:05:20 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// valgrind check for ft_error exit

#include "push_swap.h"

int	ft_error(void)
{
	printf("Error\n");
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_duplicate(int nb, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == nb)
			return (1);
		i++;
	}
	return (0);
}

int	check_args(int argc, char **args)
{
	int		i;
	long	tmp;

	i = 1;
	if (argc == 2)
		i = 0;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (ft_isnum(args[i]) == 0)
			return (ft_error());
		if (ft_duplicate(tmp, args, i))
			return (ft_error());
		if (tmp < INT_MIN || tmp > INT_MAX)
			return (ft_error());
		i++;
	}
	return (1);
}

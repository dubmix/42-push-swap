/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:49:47 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/06 14:37:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *str)
{
	long	i;
	int		neg;
	long	nb;

	i = 0;
	neg = 1;
	nb = 0;
	if (str[i] == 7 || str[i] == 8)
		return (0);
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 7))
		i++;
	if (str[i] == '-')
		neg = neg * -1;
	if (str[i] == '+' || str [i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (neg * nb);
}

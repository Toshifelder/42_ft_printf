/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_zero_minwidth_minus_prec.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:14:32 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:14:34 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	minwidth_o_prec_to_int(char *target, int *index)
{
	int	num;

	num = 0;
	while (ft_isdigit(target[*index]))
	{
		num = num * 10 + CTOI(target[*index]);
		(*index)++;
	}
	return (num);
}

static void	get_index_when_prec_invalid(char *target, int *index)
{
	(*index)++;
	while (ft_isdigit(target[*index]))
		(*index)++;
}

void		set_zero_minwidth_minus_prec(char *target, int *index,
t_format_info *info)
{
	if (target[*index] == '0')
		info->zero = true;
	if (ft_isdigit(target[*index]))
		info->min_width = minwidth_o_prec_to_int(target, index);
	if (target[*index] == '-')
	{
		info->minus = true;
		(*index)++;
	}
	if (target[*index] == '.')
	{
		(*index)++;
		if (target[*index] == '-')
			get_index_when_prec_invalid(target, index);
		else
			info->precision = minwidth_o_prec_to_int(target, index);
	}
}

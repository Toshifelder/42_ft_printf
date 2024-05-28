/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_with_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:11:53 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:11:57 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_output_with_zero(char **str, int margin)
{
	while (margin)
	{
		*str = ft_strjoin_free_both(ft_ctoa_malloc('0'), *str);
		margin--;
	}
}

void	fill_empty_with_zero(char **str, int margin, t_format_info *info)
{
	if (info->minus == true && info->precision == NOT_SET)
	{
		while (margin)
		{
			*str = ft_strjoin_free_both(*str, ft_ctoa_malloc('0'));
			margin--;
		}
	}
	else
	{
		while (margin)
		{
			*str = ft_strjoin_free_both(ft_ctoa_malloc('0'), *str);
			margin--;
		}
	}
}

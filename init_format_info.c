/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_format_info.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:13:28 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:13:30 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_format_info(t_format_info *info)
{
	info->min_width = NOT_SET;
	info->minus = false;
	info->zero = false;
	info->precision = NOT_SET;
	info->c_null = false;
	info->value = NULL;
}

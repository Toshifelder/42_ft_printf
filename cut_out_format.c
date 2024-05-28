/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_out_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:11:37 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:11:40 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static bool	isflag(const unsigned int c)
{
	if (is_of_chars(c, 4, '-', '0', '.', '*'))
		return (true);
	return (false);
}

char		*cut_out_format(const char **format, va_list *ap)
{
	char	*format_cut;

	format_cut = ft_strdup("%");
	(*format)++;
	while (isflag(**format) || ft_isdigit(**format))
	{
		if (**format == '*')
			format_cut = ft_strjoin_free_both(format_cut,
											ft_itoa_malloc(va_arg(*ap, int)));
		else
			format_cut = ft_strjoin_free_both(format_cut,
													ft_ctoa_malloc(**format));
		(*format)++;
	}
	if (isconversion_c(**format))
	{
		format_cut = ft_strjoin_free_both(format_cut,
													ft_ctoa_malloc(**format));
		(*format)++;
	}
	return (format_cut);
}

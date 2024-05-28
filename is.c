/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:13:34 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:13:36 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	is_of_chars(const unsigned int c, int argc, ...)
{
	va_list	ap;

	va_start(ap, argc);
	while (argc--)
	{
		if (va_arg(ap, unsigned int) == c)
		{
			va_end(ap);
			return (true);
		}
	}
	va_end(ap);
	return (false);
}

bool	isconversion_c(const unsigned int c)
{
	if (is_of_chars(c, 9, 'c', 'd', 'i', 'x', 'X', 's', 'u', 'p', '%'))
		return (true);
	return (false);
}

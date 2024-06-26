/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:12:48 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:12:50 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static bool				isvalid_format(char *format_cut)
{
	if (!format_cut || ft_strlen(format_cut) < 2)
		return (false);
	return (isconversion_c(format_cut[ft_strlen(format_cut) - 1]));
}

static char				*deal_with_null_case(char *str)
{
	if (!str)
		str = ft_strdup("(null)");
	return (str);
}

static void				*get_value(t_format_info *info, va_list *ap)
{
	unsigned int	c;

	if (ft_strchr("di", info->conv_c))
		return (ft_itoa_malloc((long)va_arg(*ap, int)));
	else if (info->conv_c == 'u')
		return (ft_utoa_malloc(va_arg(*ap, unsigned int)));
	else if (info->conv_c == 'x' || info->conv_c == 'X')
		return (ft_xtoa_malloc((unsigned long long)va_arg(*ap, unsigned int),
																		info));
	else if (info->conv_c == 'p')
		return (ft_xtoa_malloc((unsigned long long)va_arg(*ap, void *), info));
	else if (info->conv_c == 'c')
	{
		if ((c = va_arg(*ap, unsigned int)) != 0)
			return (ft_ctoa_malloc(c));
		info->c_null = true;
		return (ft_ctoa_malloc('1'));
	}
	else if (info->conv_c == '%')
		return (ft_ctoa_malloc('%'));
	else if (info->conv_c == 's')
		return (deal_with_null_case(ft_strdup(va_arg(*ap, char *))));
	return (NULL);
}

static t_format_info	*get_format_info(char *target, va_list *ap)
{
	int				index;
	t_format_info	*info;

	info = malloc(sizeof(t_format_info) * 1);
	if (!info)
		return (NULL);
	init_format_info(info);
	info->conv_c = target[ft_strlen(target) - 1];
	index = 1;
	while (!isconversion_c(target[index]))
		set_zero_minwidth_minus_prec(target, &index, info);
	info->value = get_value(info, ap);
	return (info);
}

int						ft_printf(const char *format, ...)
{
	size_t	count;
	char	*format_cut;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	while (format && *format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			format++;
			count++;
		}
		else
		{
			format_cut = cut_out_format(&format, &ap);
			if (isvalid_format(format_cut))
				count += put_result(get_format_info(format_cut, &ap));
			SAFE_FREE(format_cut);
		}
	}
	va_end(ap);
	return (count);
}

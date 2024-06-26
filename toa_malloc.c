/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toa_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:14:42 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:14:44 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ctoa_malloc(unsigned int c)
{
	char	*mc;

	mc = ft_strdup("0");
	if (!mc)
		return (NULL);
	mc[0] = c;
	return (mc);
}

char	*ft_utoa_malloc(unsigned int num)
{
	if (num >= 10)
		return (ft_strjoin_free_both(ft_utoa_malloc(num / 10),
												ft_utoa_malloc(num % 10)));
	else
		return (ft_ctoa_malloc((char)(num + '0')));
}

char	*ft_itoa_malloc(long num)
{
	if (num < 0)
		return (ft_strjoin_free_both(ft_ctoa_malloc('-'),
													ft_itoa_malloc(-num)));
	else if (num >= 10)
		return (ft_strjoin_free_both(ft_itoa_malloc(num / 10),
												ft_itoa_malloc(num % 10)));
	else
		return (ft_ctoa_malloc((char)(num + '0')));
}

char	*ft_xtoa_malloc(unsigned long long num, t_format_info *info)
{
	if (num >= 16)
		return (ft_strjoin_free_both(ft_xtoa_malloc(num / 16, info),
									ft_xtoa_malloc(num % 16, info)));
	else if (info->conv_c == 'X')
		return (ft_ctoa_malloc((char)("0123456789ABCDEF"[num])));
	else
		return (ft_ctoa_malloc("0123456789abcdef"[num]));
}

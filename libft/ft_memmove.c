/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:33:21 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:33:23 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	int					index;

	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	d = dst;
	index = (int)len - 1;
	while (index >= 0)
	{
		d[index] = s[index];
		index--;
	}
	return (dst);
}

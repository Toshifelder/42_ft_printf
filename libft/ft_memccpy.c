/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:33:00 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:33:01 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	size_t				index;

	if (dst == src)
		return (dst);
	d = dst;
	index = 0;
	while (index < n)
	{
		d[index] = s[index];
		if (s[index] == (unsigned char)c)
			return (&dst[index + 1]);
		index++;
	}
	return (NULL);
}

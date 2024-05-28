/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:04 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:05 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dststr_len;
	size_t	index;

	if (dst == NULL || src == NULL)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dststr_len = MIN(dstsize - 1, srclen);
	index = 0;
	while (index < dststr_len)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (srclen);
}

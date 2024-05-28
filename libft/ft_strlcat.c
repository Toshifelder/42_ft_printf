/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:34:59 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:01 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	const size_t	s_len = ft_strlen(dest);
	const size_t	srclen = ft_strlen(src);

	if (destsize < s_len + 1)
		return (srclen + destsize);
	ft_strlcpy(&dest[s_len], src, destsize - s_len);
	return (srclen + s_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:45 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:47 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const size_t	h_len = ft_strlen(haystack);
	const size_t	n_len = ft_strlen(needle);
	size_t			index;

	if (haystack == NULL || needle == NULL || n_len > h_len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	index = 0;
	while (index + n_len <= h_len)
	{
		if (ft_strncmp(&haystack[index], needle, n_len) == 0)
			return ((char *)&haystack[index]);
		index++;
	}
	return (NULL);
}

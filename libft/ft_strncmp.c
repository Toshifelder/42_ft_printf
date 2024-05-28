/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:21 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:22 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	const size_t	min_str_len = MIN(s1_len, s2_len);

	index = 0;
	while (index < min_str_len)
	{
		if (s1[index] != s2[index])
			return ((int)((unsigned char)s1[index] - (unsigned char)s2[index]));
		index++;
		if (index == n)
			return (0);
	}
	if (s1_len > s2_len)
		return (1);
	if (s1_len < s2_len)
		return (-1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:40 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:42 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	uc = c;
	const int			s_len = (int)ft_strlen(s);
	int					index;

	if (s == NULL)
		return (NULL);
	index = s_len;
	while (index >= 0)
	{
		if (s[index] == uc)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}

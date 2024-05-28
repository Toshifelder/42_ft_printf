/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:33:05 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:33:06 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str = s;
	size_t		index;

	index = 0;
	while (index < n)
	{
		if (str[index] == (char)c)
			return ((void *)&str[index]);
		index++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:15 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:17 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	s_len;
	size_t	index;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	p = malloc((sizeof(*p)) * (s_len + 1));
	if (p == NULL)
		return (NULL);
	index = 0;
	while (index < s_len)
	{
		p[index] = f(index, s[index]);
		index++;
	}
	p[index] = '\0';
	return (p);
}

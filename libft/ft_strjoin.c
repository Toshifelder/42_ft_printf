/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:34:55 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:34:56 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*ret_s;

	if (!s1 || !s2)
		return (NULL);
	ret_s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ret_s)
		return (NULL);
	ft_strcpy(ret_s, s1);
	ft_strcpy(&ret_s[s1_len], s2);
	return (ret_s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:50 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:52 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	size_t	s_len;

	if (str == NULL || set == NULL)
		return (NULL);
	s_len = ft_strlen(str);
	start_index = 0;
	while (start_index < s_len && ft_strchr(set, str[start_index]))
		start_index++;
	end_index = (size_t)s_len;
	while (end_index > start_index && ft_strchr(set, str[end_index - 1]))
		end_index--;
	return (ft_substr((char *)str, start_index, end_index - start_index));
}

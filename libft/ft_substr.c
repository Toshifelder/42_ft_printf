/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:35:55 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:35:56 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *original_s, unsigned int start_index, size_t len)
{
	char	*sub_s;
	size_t	sub_index;
	size_t	cut_len;
	size_t	original_len;
	size_t	original_index;

	if (original_s == NULL)
		return (NULL);
	original_len = ft_strlen(original_s);
	if (start_index > original_len)
		return (ft_strdup(""));
	cut_len = MIN(original_len - start_index, len);
	sub_s = malloc(sizeof(*sub_s) * (cut_len + 1));
	if (sub_s == NULL)
		return (NULL);
	sub_index = 0;
	original_index = start_index;
	while (cut_len > 0)
	{
		sub_s[sub_index++] = original_s[original_index++];
		cut_len--;
	}
	sub_s[sub_index] = '\0';
	return (sub_s);
}

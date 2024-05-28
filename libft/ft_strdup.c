/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:34:44 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:34:45 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *original_s)
{
	size_t	len;
	char	*dup_s;

	len = ft_strlen(original_s);
	dup_s = malloc(sizeof(char) * (len + 1));
	if (!dup_s)
		return (NULL);
	return (ft_strcpy(dup_s, original_s));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:34:38 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:34:40 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_free(char *original_s)
{
	const char	*duplicated_s = ft_strdup(original_s);

	SAFE_FREE(original_s);
	return ((char *)duplicated_s);
}

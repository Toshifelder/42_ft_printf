/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_both.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:34:49 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:34:51 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_both(char *s1, char *s2)
{
	const char	*joined_str = ft_strjoin(s1, s2);

	SAFE_FREE(s1);
	SAFE_FREE(s2);
	return ((char *)joined_str);
}

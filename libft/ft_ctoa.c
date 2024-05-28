/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:31:05 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:31:08 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctoa(char c)
{
	char	*c_as_str;

	c_as_str = ft_strdup("0");
	if (c_as_str == NULL)
		return (NULL);
	c_as_str[0] = c;
	return (c_as_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:36:18 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:36:19 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_xtoa(unsigned num)
{
	if (num >= 16)
		return (ft_strjoin_free_both(ft_xtoa(num / 16), ft_xtoa(num % 16)));
	return (ft_ctoa("0123456789abcdef"[num]));
}

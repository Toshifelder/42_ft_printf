/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:36:11 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:36:12 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int num)
{
	if (num >= 10)
		return (ft_strjoin_free_both(ft_utoa(num / 10), ft_utoa(num % 10)));
	else
		return (ft_ctoa((char)ITOC(num)));
}

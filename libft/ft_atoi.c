/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:30:39 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:30:42 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	bool			is_signed;
	unsigned int	i;
	long			n;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	is_signed = false;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_signed = true;
		i++;
	}
	n = 0;
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (is_signed ? (int)-n : (int)n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:33:58 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:33:59 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		write(STDOUT_FILENO, INT_MIN_STR, ft_strlen(INT_MIN_STR));
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
		return ;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(ITOC(n % 10));
}

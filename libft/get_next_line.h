/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:36:28 by towatana          #+#    #+#             */
/*   Updated: 2024/05/29 03:36:30 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define MAX_FD			256
# define NOT_EOF		1
# define FILE_END		0
# define NOT_FOUND		-1
# define BUFFER_SIZE	1024

int		get_next_line(int fd, char **line);

#endif

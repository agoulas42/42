/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 17:51:54 by agoulas           #+#    #+#             */
/*   Updated: 2018/01/22 15:19:56 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# define BUFF_SIZE 9

int		get_next_line(const int fd, char **line);

#endif

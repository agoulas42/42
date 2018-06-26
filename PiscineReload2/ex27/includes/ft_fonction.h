/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:03:59 by agoulas           #+#    #+#             */
/*   Updated: 2017/11/08 11:11:57 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_FONCTION_H
# define __FT_FONCTION_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# define BUFFSIZE 2048

void	ft_putstr(char *str);
void	ft_putchar_error(char c);
void	ft_putstr_error(char *str);
int		ft_display_file(char *namefile);

#endif

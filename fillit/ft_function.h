/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:27:59 by zyuan             #+#    #+#             */
/*   Updated: 2017/12/20 16:16:11 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTION_H
# define FT_FUNCTION_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_etris
{
	char			**te;
	size_t			x;
	size_t			y;
	char			value;
	struct s_etris	*next;
}					t_etris;

typedef struct		s_map{
	char			**tab;
	size_t			line;
}					t_map;

int					resolve(t_map **test, t_etris *input);
int					ft_resolution(t_etris *input);
size_t				ft_strlen(const char *s);
int					ft_hashtag(char *str);
void				ft_putchar(char c);
char				*ft_strncat(char *dst, const char *src, size_t n);
void				ft_lstadd_last(t_etris **n, char *content);
int					ft_init_stringtab(char b[16]);
int					ft_init_content(char *s);
int					fill_tetris(t_etris **buf, int fd, char b[16],
		char tmp[16]);
int					ft_add_tetris(t_etris **buf, char *content);
int					ft_init_tetris(char *namefile, t_etris **buf);
t_map				*init_tmap(size_t line);
t_map				*init_tmap_tab(t_map *test);
int					reinit_tmap(t_map **test);
void				free_tmap(t_map **test);
void				ft_print_tmap(t_map *p);
t_map				**place(t_map **test, t_etris *input, int x, int y);
int					is_place(t_map *test, t_etris *input, int x, int y);
void				ft_delete_tab(char ***tab, size_t line);
void				delete_c(char ***tab, size_t line, char c);
int					count_width(char *s);
int					count_height(char *s);
size_t				ft_index_tab(char *tmp);
void				ft_init_tab_t(char ***tab, size_t x, size_t y);
void				free_tab_t(char ***tab, size_t x);
char				**ft_init_t_etris(char *tmp, size_t x, size_t y,
		size_t index);
t_etris				*ft_new_t(char *tmp, char c);
size_t				strlen_t_etris(t_etris *t);
void				free_t(t_etris **p);
#endif

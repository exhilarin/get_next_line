/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas-guney <ilyas-guney@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:51:11 by iguney            #+#    #+#             */
/*   Updated: 2025/04/13 09:12:13 by ilyas-guney      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

char	*get_update(char *putline);
char	*get_mainline(char *putline);
char	*get_read(int fd, char *putline);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_strlen_gnl(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif

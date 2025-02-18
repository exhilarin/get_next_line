/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:02:36 by iguney            #+#    #+#             */
/*   Updated: 2024/12/17 19:52:03 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*get_update(char *putline);
char	*get_mainline(char *putline);
char	*get_read(int fd, char *putline);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif

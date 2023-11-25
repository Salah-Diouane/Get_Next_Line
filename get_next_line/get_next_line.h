/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:27:25 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/24 21:19:12 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1042
# endif

int		ft_strlen(char *s);
int		find(char *s, char c);
char	*ft_join(char *dest, char *s1, char *s2);
char	*ft_strjoin(char *start, char *buff);
char	*ft_read_line(char *s);
char	*move_s(char *s);
char	*get_next_line(int fd);
#endif

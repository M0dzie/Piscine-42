/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfraysse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:19:17 by cfraysse          #+#    #+#             */
/*   Updated: 2022/07/24 15:48:20 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
int		error(void);
int		dict_error(void);
int		ft_check_input(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_count_dict(char *dict);
int		read_dict(char *dict);
#endif

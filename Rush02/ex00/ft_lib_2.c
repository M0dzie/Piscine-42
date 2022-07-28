/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:28:53 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/24 16:01:17 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int i, unsigned int j)
{
	unsigned int	k;

	k = 0;
	while (s2[k] != '\0' && s1[j] == s2[k] && k < i - 1)
	{
		j++;
		k++;
	}
	return (s1[j] - s2[k]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (to_find[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			result = ft_strncmp(str, to_find, i, j);
			if (result == 0)
			{
				while (str[j] != '\n')
					ft_putstr(&str[j++]);
				return (&str[j]);
			}
		}
		j++;
	}
	return (0);
}

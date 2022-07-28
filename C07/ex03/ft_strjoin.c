/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:24:29 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/26 14:42:58 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *src, char *dest, char *sep)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	i = 0;
	strs = (char *)malloc(sizeof(char) * size);
	if (*strs == 0)
		return (strs);
	ft_strcat(strs, dest, sep);
	while (sep[i] != '\0')
	{
		dest[i] = sep[i];
		i++;
	}
}

int	main(void)
{
	ft_strjoin();
	return (0);
}

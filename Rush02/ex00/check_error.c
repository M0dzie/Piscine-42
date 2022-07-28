/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:02:02 by ivella            #+#    #+#             */
/*   Updated: 2022/07/24 15:00:23 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	dict_error(void)
{
	write(1, "Dict Error\n", 11);
	return (0);
}

int	ft_check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			return (-1);
		if (str[i] == '\0')
			return (-1);
		if (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	return (0);
}

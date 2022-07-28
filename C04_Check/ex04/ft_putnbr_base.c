/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:00:43 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/28 11:44:13 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_stop_if_error(char *base)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base [j] != '\0')
		{
			if (base[i] == base [j] || base [i] == '-' || base [i] == '+'
				|| base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	int			check;
	long int	lnbr;

	lnbr = nbr;
	check = ft_stop_if_error(base);
	if (check == 1)
	{
		len = ft_strlen(base);
		if (lnbr < 0)
		{
			lnbr *= -1;
			ft_putchar('-');
		}
		if (lnbr >= len)
			ft_putnbr_base((lnbr / len), base);
		if (lnbr >= 0)
			ft_putchar(base[lnbr % len]);
	}
}

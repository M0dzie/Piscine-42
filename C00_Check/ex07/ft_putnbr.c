/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:42:06 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/13 08:21:55 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negative_numbers(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
		ft_putchar('-');
}

void	ft_putnbr(int nb)
{
	int	tab[11];
	int	i;

	i = 0;
	negative_numbers(nb);
	if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		tab[i] = (nb % 10);
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar (tab[i -1] + '0');
		i--;
	}
}

int	main(void)
{
	ft_putnbr(0);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:39:34 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/27 11:30:04 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power > 0)
			result = nb * ft_recursive_power(nb, power -1);
	return (result);
}

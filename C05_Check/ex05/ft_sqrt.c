/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:02:41 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/28 11:46:52 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;
	int	result;

	test = 1;
	if (nb <= 0)
		return (0);
	if (nb == 2147483647)
		return (46340);
	while (test < 46340)
	{
		result = nb - (test * test);
		if (result == 0)
			return (test);
		test++;
	}
	return (0);
}

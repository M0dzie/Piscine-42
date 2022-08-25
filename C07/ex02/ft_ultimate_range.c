/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:14:24 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/26 13:01:18 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int         i;
    long int    size;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    size = max - min;
    *range = (int *)malloc(sizeof(int) * size);
    if (!*range)
        return (-1);
    i = 0;
    while (i < size)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (i);
}

int main(void)
{
    int min = -3;
    int max = 30;
    int *tab;

    printf("%d", ft_ultimate_range(&tab, min, max));
    return (0);
}

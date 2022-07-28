/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:36:05 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/24 18:38:54 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:16:02 by thmeyer           #+#    #+#             */
/*   Updated: 2022/07/24 18:35:06 by thmeyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_count_dict(char *dict)
{
	int		file;
	int		len;
	char	buff[1];

	len = 0;
	file = open("numbers.dict", O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, buff, 1))
	{
		len++;
	}
	dict = (char *)malloc(sizeof(char) * (len + 1));
	if (!dict)
		return (-1);
	if (close(file) == -1)
		return (-1);
	read_dict(dict);
	return (0);
}

int	read_dict(char *dict)
{
	int		file;
	int		len;
	char	buff[1];

	len = 0;
	file = open("numbers.dict", O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, buff, 1))
	{
		dict[len] = buff[0];
		len++;
	}
	dict[len] = '\0';
	if (close(file) == -1)
		return (-1);
	return (0);
}

char	*ft_search(char *dict, char **argv)
{
	ft_strstr(dict, argv[1]);
	return (dict);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		error();
	else if (ft_check_input(argv[1]) < 0)
		error();
	ft_search("42", &argv[1]);
	return (0);
}

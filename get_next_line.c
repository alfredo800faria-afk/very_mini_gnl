/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srussso <srusso-b@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:43:12 by srussso           #+#    #+#             */
/*   Updated: 2025/12/04 18:26:53 by srussso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl(int fd)
{
	int		byte;
	char	c;
	char	*str_buffer;
	int		i;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	i = 0;
	str_buffer = (char *)malloc(10000000);
	if (!str_buffer)
		return (NULL);
	byte = read(fd, &c, 1);
	while (byte > 0)
	{
		str_buffer[i] = c;
		i++;
		if (c == '\n' || c == EOF)
			break ;
		byte = read(fd, &c, 1);
	}
	if (i == 0 || byte < 0)
	{
		clear(&str_buffer);
		return (NULL);
	}
	str_buffer[i] = '\0';
	return (str_buffer);
}
/*
int	main(void)
{
	int		fd;
	char	*str;
	char	*path;
	int		i;

	path = "output.txt";
	fd = open(path, O_RDONLY);
	i = 0;
	while (i < 10) //number of loop (test)
	{
		str = gnl(fd);
		printf("i: %i\n", i);
		printf("fd: %i, %s\n", fd, str);
		i++;
	}

	close(fd);

	return (0);
}
*/

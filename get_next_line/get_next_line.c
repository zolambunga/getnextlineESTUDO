/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:25:37 by zombunga          #+#    #+#             */
/*   Updated: 2024/08/23 13:58:40 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int ft_strlen(char str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(const char *str, const char *buffer)
{
	int	i;
	int	j;
	char *result;
	
	i = 0;
	j = 0;
	if (!str)
	{
		str = malloc(sizeof(char) * 1);	
		str[i] = '\0';
	}
	result = malloc(sizeof(char) * ft_strlen(str) + ft_strlen(buffer) + 1);
	while (str[i++])
		result[i] = str[i];
	while (buffer[j++])
		result[i+j] = buffer[j];
	free(str);
	result[i+j] = '\0';
	return (result);
}

void ft_free(char **str, char *buffer)
{
	free(buffer);
	free(*str);
	*str = NULL;
}

char *get_next_line(int fd)
{
	int	i;
	char	*buffer;
	static char *str;

	i = 1;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (i > 0 && ft_strchr())
	{
		i = read(fd, buffer, BUFFER_SIZE);	
		if (i == -1)
		{
			ft_free(&str, buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	return ();
}

int	main(void)
{	
	int	fd;

	fd = open("getTESTE.txt", O_RDONLY |O_CREAT);
	printf("A linha : %s", get_next_line(fd));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:42:25 by zombunga          #+#    #+#             */
/*   Updated: 2024/08/22 19:58:13 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_hex
{
	int		i;
	int		len;
	int		end;
	int		start;
	char	buffer[17];
}	t_hex;

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_printhex(unsigned long value, int sign, int isnotptr);
int		ft_putptr(unsigned long ptr);
int		ft_putnbr_decimal(int nbr);
int		ft_putnbr_unsigned(unsigned int nbr);
int		ft_printf(const char *str, ...);
void	ft_reverse_hex_output(char *buffer, int start, int end);

#endif

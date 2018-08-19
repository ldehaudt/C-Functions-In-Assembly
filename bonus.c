/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:53:21 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:53:23 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	test_putchar(void)
{
	printf("\n=====BONUS======:\n");
	printf("\nPUTCHAR :\n");
	ft_putchar('a');
	ft_putchar('b');
}

void	test_putbyte(void)
{
	printf("\nPUT BYTE :\n");
	ft_puts("'1' = ");
	ft_putbyte('1');
	ft_puts("\n1 = ");
	ft_putbyte(1);
	ft_puts("\n'a' = ");
	ft_putbyte('a');
}

void	test_printbinary(void)
{
	char *test;

	printf("\nPRINT BINARY :\n");
	ft_puts("'abcd' = ");
	test = "abcd";
	ft_printbinary(test, 4);
	ft_puts("\n'I like bread and potatoes' = ");
	ft_printbinary("I like bread and potatoes", 25);
}

void	test_putnbr(void)
{
	printf("\nPUTNBR :\n");
	ft_putnbr(-1);
	ft_puts("\n");
	ft_putnbr(-2314);
	ft_puts("\n");
	ft_putnbr(0);
	ft_puts("\n");
	ft_putnbr(10);
	ft_puts("\n");
	ft_putnbr(1312);
	ft_puts("\n");
	ft_putnbr(2147483647);
	ft_puts("\n");
	ft_putnbr(-2147483648);
	ft_puts("\n");
}

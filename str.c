/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:44:21 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:44:22 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	test_strcat(void)
{
	char *s1;
	char *s2;

	printf("STRCAT : \n");
	s1 = malloc(10);
	s1[0] = '1';
	s1[1] = '2';
	s1[2] = '3';
	s1[3] = '4';
	s1[4] = '5';
	s1[5] = '6';
	s1[6] = '\0';
	s2 = malloc(10);
	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = 'c';
	s2[3] = '\0';
	printf("s1    : %s\n", s1);
	printf("s2    : %s\n", s2);
	ft_strcat(s1, s2);
	printf("TOTAL : %s\n", s1);
	free(s1);
	free(s2);
}

void	test_strlen(void)
{
	char *s1;
	char *str;

	str = "d";
	s1 = "123456abc";
	printf("STRLEN :\n");
	printf("%s = %zu\n", s1, ft_strlen(s1));
	printf("%s = %zu\n", str, ft_strlen(str));
}

void	test_puts(void)
{
	char *s1;
	char *str;

	str = "d";
	s1 = "123456abc";
	printf("PUTS : \n");
	ft_puts(str);
	ft_puts("\ntest\n");
	ft_puts(s1);
}

void	test_strdup(void)
{
	char	*n;
	char	*st;

	st = malloc(10);
	printf("\nSTRDUP :\n");
	ft_bzero(st, 10);
	ft_memcpy(st, "abcde", 5);
	n = ft_strdup(st);
	printf("new = %s\n", n);
	printf("old = %s\n", st);
	n[0] = 't';
	ft_puts("t to new[0]\n");
	printf("new = %s\n", n);
	printf("old = %s\n", st);
	free(st);
	free(n);
}

void	test_strnew(void)
{
	char *tmp;

	printf("\nSTRNEW :\n");
	tmp = ft_strnew(4);
	tmp[0] = 'a';
	tmp[1] = '1';
	tmp[2] = 'b';
	tmp[3] = '2';
	ft_puts(tmp);
	free(tmp);
}

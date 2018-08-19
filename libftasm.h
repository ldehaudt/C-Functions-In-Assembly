/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:59:04 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:59:06 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <assert.h>
# include <string.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

void	test_alpha();
int		ft_isalpha(int n);
void	test_digit();
int		ft_isdigit(int n);
void	test_alnum();
int		ft_isalnum(int n);
void	test_print();
int		ft_isprint(int n);
void	test_ascii();
int		ft_isascii(int n);
void	test_lower();
int		ft_tolower(int n);
void	test_upper();
int		ft_toupper(int n);
void	test_lower();
int		ft_tolower(int n);
void	test_bzero();
void	ft_bzero(void *s, size_t n);
void	test_strcat();
char	*ft_strcat(char *restrict a, const char *restrict b);
void	test_puts();
int		ft_puts(const char *s);
void	test_strlen();
size_t	ft_strlen(const char *s);
void	test_memset();
void	*ft_memset(void *b, int c, size_t len);
void	test_memcpy();
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	test_strdup();
char	*ft_strdup(const char *s1);
void	test_putchar();
void	ft_putchar(char c);
void	test_putnbr();
void	ft_putnbr(int n);
void	test_strnew();
char	*ft_strnew(int size);
void	test_cat();
void	ft_cat(int fd);
void	test_putbyte();
void	ft_putbyte(unsigned char c);
void	test_printbinary();
void	ft_printbinary(void *s, unsigned int n);

#endif

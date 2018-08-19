NAME = libfts.a

FILENAMES = ft_isalpha.s\
			ft_isdigit.s\
			ft_isalnum.s\
			ft_isascii.s\
			ft_isprint.s\
			ft_toupper.s\
			ft_tolower.s\
			ft_bzero.s\
			ft_strcat.s\
			ft_strlen.s\
			ft_puts.s\
			ft_memset.s\
			ft_memcpy.s\
			ft_strdup.s\
			ft_putchar.s\
			ft_putnbr.s\
			ft_cat.s\
			ft_strnew.s\
			ft_putbyte.s\
			ft_printbinary.s\

ASM = /nfs/2018/l/ldehaudt/.brew/Cellar/nasm/2.13.01/bin/nasm -f macho64
OBJECTS = $(FILENAMES:%.s=%.o)

all: $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libftASMTests

re: fclean all

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	gcc -L . -lfts main.c is.c str.c oddballs.c bonus.c mem.c -o libftASMTests
%.o: %.s
	$(ASM) -o $@ $<
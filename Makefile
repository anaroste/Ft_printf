# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by anaroste          #+#    #+#              #
#    Updated: 2018/03/03 17:02:07 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf

FLAGS = -Wall -Werror -Wextra

PRINTF_SRC_NAME = ft_add_nchar_after.c	\
				ft_add_nchar_before.c	\
				ft_add_nchar_afone.c	\
				ft_add_nchar_custom.c	\
				ft_printf.c				\
				ft_init_struct.c		\
				ft_handler.c			\
				ft_convert_di.c			\
				ft_convert_ouxmx.c		\
				ft_convert_o.c			\
				ft_convert_u.c			\
				ft_convert_x.c			\
				ft_convert_mx.c			\
				ft_convert_md.c			\
				ft_convert_momumod.c	\
				ft_convert_c.c			\
				ft_convert_s.c			\
				ft_convert_mc.c			\
				ft_convert_ms.c			\
				ft_convert_mod.c		\
				ft_convert_p.c			\
				ft_wchar_functions.c	\
				ft_printnchar.c			\

LIBFT_SRC_NAME = ft_custom_itoa_base.c	\
				ft_itoa.c				\
				ft_llong_itoa.c			\
				ft_putchar.c			\
				ft_putnbr.c				\
				ft_putstr.c				\
				ft_putstr_len.c			\
				ft_strcat.c				\
				ft_strchr.c				\
				ft_strdup.c				\
				ft_strlen.c				\
				ft_strlen_c.c			\
				ft_strncpy.c			\
				ft_ullong_itoa_base.c	\
				ft_strdel.c				\
				ft_memcpy.c				\

PRINTF_SRC = $(addprefix printf_functions/, $(PRINTF_SRC_NAME))
LIBFT_SRC = $(addprefix libft/, $(LIBFT_SRC_NAME))

PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

OBJ = $(LIBFT_OBJ) $(PRINTF_OBJ)

all : $(NAME)

$(NAME) : $(OBJ) $(NAME).a

%.a:
	@ar rc $(NAME).a $(OBJ)
	@ranlib $(NAME).a
	@echo "libftprintf compiled"

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean :
	@/bin/rm -f $(OBJ)
	@echo "objects have been cleaned"

fclean : clean
	@/bin/rm -f $(NAME).a
	@echo "libftprintf deleted"

lib : all clean

re : fclean all

.PHONY : all clean fclean re

coffee:
	@clear
	@echo ""
	@echo "                   ("
	@echo "                      )     ("
	@echo "               ___...(-------)-....___"
	@echo '           .-""       )    (          ""-.'
	@echo "      .-''''|-._             )         _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "                 ("
	@echo "                   )      ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""       )   (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "               ("
	@echo "                   )     ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "             (         ) "
	@echo "               )        ("
	@echo "               ___)...----)----....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'

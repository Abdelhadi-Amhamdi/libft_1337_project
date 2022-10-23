SRCS = ft_putstr_fd.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c 
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstmap.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a
C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c libft.h
	cc $(C_FLAGS) -c $< 

$(NAME) : $(OBJS)
	ar rc libft.a $(OBJS)

bonus : $(BONUS_OBJS)
	ar rc libft.a $(BONUS_OBJS)

clean :
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re 

NAME	=	libft.a

SRCS	=	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)

CC	=	cc

FLAGS	=	-Wall -Werror -Wextra -g -fsanitize=address

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@
all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)	

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
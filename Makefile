CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c
OBJS = $(SRCS:.c=.o)
NAME = random_number.out

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

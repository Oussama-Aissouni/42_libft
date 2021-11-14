CC=gcc
NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
C_FILES=*.c
O_FILES=*.o

all: $(NAME)

$(NAME): COMP
	@ar rcs $(NAME) $(O_FILES)

COMP:
	@$(CC) $(FLAGS) $(C_FILES)

re: fclean all

fclean: clean
	@rm -f $(NAME)
clean:
	@rm -f $(O_FILES)

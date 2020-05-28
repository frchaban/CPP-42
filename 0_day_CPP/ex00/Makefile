NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean :
	rm -rf megaphone.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean

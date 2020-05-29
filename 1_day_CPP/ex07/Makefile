NAME = replace

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRCS = replace.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJS)
	rm -rf *.replace

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean

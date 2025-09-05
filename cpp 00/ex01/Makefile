# Compiler and flags
GREEN=\033[0;32m
RED=\033[0;31m
RESET=\033[0m


NAME     := PhoneBook
CXX      := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
RM       := rm -f

SRCS := main.cpp \
		src/Helper.cpp   \
		src/PhoneBook.cpp \
		src/Contact.cpp   \
		src/Safety.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)
	make clean
	"clear"
	echo "$(GREEN)Build complete!$(RESET)"
$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	echo "$(RED)Removing object files...$(RESET)"
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME     := My_First_Class_in_Orthodox_Canonical_Form
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
RM       := rm -f

SRCS := main.cpp \
		src/Fixed.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
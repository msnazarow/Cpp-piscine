OBJ = contact.o phonebook.o
NAME = phonebook
CXX ?= clang++ -std=c++98
CPPFLAGS ?= -Wall -Wextra -Werror -g -MMD

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
-include $(OBJ:.o=.d)
.PHONY: all clean fclean re so
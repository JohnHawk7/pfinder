CC = clang
NAME = libmx.a

MKDIR = mkdir -p
PRINT = printf
AR = ar -rcs
RM = rm -f 

.DEFAULT_GOAL = all

INC_DIR = inc/
SRC_DIR = src/
OBJ_DIR = obj/

WFLAGS = -Wall -Wextra -Werror -Wpedantic
HFLAGS = -I$(INC_DIR)

COMPILE = $(CC) -std=c11 -pipe $(WFLAGS) $(HFLAGS)

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)


all: $(NAME)

$(OBJ_DIR):
	@$(MKDIR) $@
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(COMPILE) -o $@ -c $<
	@$(PRINT) "$< compiled!\n"

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(AR) $@ $(OBJ)
	@$(PRINT) "Library successfully created!\n"

uninstall: clean
	@$(RM) $(NAME)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@$(RM) *.a

reinstall: uninstall all


SRC=libasm
OBJ=obj
BIN=bin

NASM = nasm
ASMFLAGS = -felf64
CFLAGS += -m64 -g3
CC= gcc
TARGET= my_libasm
RM= rm -rf

$(shell mkdir -p obj)

SRCS=$(wildcard $(SRC)/*.S)
OBJS=$(patsubst $(SRC)/%.S, $(OBJ)/%.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) src/main.c src/test.c

$(OBJ)/%.o: $(SRC)/%.S
	${NASM} ${ASMFLAGS} -o $@ $^

clean:
	$(RM) $(OBJ)/*.o 

fclean: clean
	$(RM) $(TARGET) $(OBJ)

re: 	fclean clean

.PHONY: all clean fclean re


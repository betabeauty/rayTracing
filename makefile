
FLAGS = -g -D _DEBUG -I../../include -I/usr/local/include -L../../lib -L/usr/local/lib /usr/local/lib/liblog4cplus.a -lnetbase -levent -lrt -llua -ldl -Wall
CC=g++
SRC=$(wildcard *.cpp)
OBJ=$(addprefix ./, $(addsuffix .o, $(basename $(SRC))))
TARGET=main
all: $(TARGET)
	
$(TARGET): $(SRC)
	$(CC)  -o $@  $^ $(CFLAGS)
clean:
	rm -f $(TARGET) $(OBJ)

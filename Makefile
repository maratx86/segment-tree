EXEC = exec
EXEC_T = test

DIR_SRCS = ./srcs/
DIR_OBJS = ./objs/

SRCS = Root.cpp Node.cpp main.cpp
SRCS_T = Root.cpp Node.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS_T = $(SRCS_T:.cpp=.o)


all: $(EXEC)

test: $(EXEC_T)

$(EXEC): $(OBJS)
		c++ $(OBJS) -o $(EXEC)

$(EXEC_T): $(OBJS_T)
		c++ $(OBJS_T) -o $(EXEC_T)

%.o: %.cpp
		c++ -s $< -o $@

clean:
		rm -rf $(OBJS) $(EXEC) $(OBJS_T) $(EXEC_T)

EXEC = exec

SRCS = Root.cpp Node.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
		c++ $(OBJS) -o $(EXEC)

%.o: %.cpp
		c++ -s $< -o $@

clean:
		rm -rf $(OBJS) $(EXEC)

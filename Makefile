EXEC = exec
EXEC_T = test

DIR_SRCS = ./srcs/
DIR_OBJS = ./objs/

SRCS = Root.cpp Node.cpp main.cpp
SRCS_T = Root.cpp Node.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS_T = $(SRCS_T:.cpp=.o)

WD_SRCS = $(addprefix $(DIR_SRCS),$(SRCS))
WD_SRCS_T = $(addprefix $(DIR_SRCS),$(SRCS_T))
WD_OBJS = $(addprefix $(DIR_OBJS),$(OBJS))
WD_OBJS_T = $(addprefix $(DIR_OBJS),$(OBJS_T))

all: $(DIR_OBJS) $(EXEC)

test: $(DIR_OBJS) $(EXEC_T)

$(DIR_OBJS):
		mkdir -p $(DIR_OBJS)

$(EXEC): $(WD_OBJS)
		c++ $(WD_OBJS) -o $(EXEC)

$(EXEC_T): $(WD_OBJS_T)
		c++ $(WD_OBJS_T) -o $(EXEC_T)

$(DIR_OBJS)%.o: $(DIR_SRCS)%.cpp
		c++ -c $< -o $@ -I./includes

clean:
		rm -rf $(WD_OBJS) $(EXEC) $(WD_OBJS_T) $(EXEC_T)

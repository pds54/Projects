CFLAGS = -Wall
EXEC := sexy_shell

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	gcc $(OBJS) $(LDLIBS) -o $(EXEC)

%.o: %.c
	gcc $(CLFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

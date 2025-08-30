CC = gcc
CFLAGS = -Wall

srcs = $(wildcard src/*.c)
headers = $(wildcard src/*.h)
objs = $(srcs:.c=.o)

bin = todo

all: $(bin)

run: all
	./todo

$(bin): $(objs)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(headrs)
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -rf ./$(bin)
	rm -rf $(objs)

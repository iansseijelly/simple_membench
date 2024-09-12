CC = gcc
CFLAGS = -g -Wall

SRCS = $(wildcard *.c)
TARGETS = $(SRCS:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

dump: $(TARGETS)
	@for target in $(TARGETS); do \
		objdump -d $$target > $$target.asm; \
	done

clean:
	rm -f $(TARGETS) *.asm
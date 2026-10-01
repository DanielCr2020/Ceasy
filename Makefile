# Does anyone *actually* understand how makefiles work???
TARGET=ceasy
SRC_DIR=src
HDR_DIR=hdr

CC=gcc
# variable named CFLAGS is inserted automatically into object file compilation
CFLAGS=-Wall -g
LDFLAGS=

SRC=$(wildcard $(SRC_DIR)/*.c)
HDR=$(wildcard $(HDR_DIR)/*.h)

OBJS=$(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS) $(SRC) $(HDR)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)		
	
clean:
	rm $(OBJS) $(TARGET)

.PHONY: all clean

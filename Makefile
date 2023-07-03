#Variables
CC = gcc
CFLAGS = -Wall -Wextra
SRCS = main.c addition.c division.c multiplication.c soustraction.c
#OBJS = $(SRCS:.c=.o)
SRCSTEST = test.c addition.c division.c multiplication.c soustraction.c
TARGET = exeMake
TARGETTEST = testMake

#Règles
build: 
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

test:
	$(CC) $(CFLAGS) -o $(TARGETTEST) $(SRCSTEST)
	./testMake

deploy:
	mkdir -p deploy
	cp $(TARGET) deploy

#Phony
.PHONY: clean deploy

clean:
	rm -f $(TARGET)
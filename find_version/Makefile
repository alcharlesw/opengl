CC=gcc
opts=-O2
GLlib = -lglut -lGL

find_version_files = find_version.c

all: find_version

find_version: find_version.o
	$(CC) $(opts) $(find_version_files) -o $@ $(GLlib)

clean:
	rm find_version *.o

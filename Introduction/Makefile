CC=g++
opts=-O2
GLlib = -lglut -lGL -lglfw -lGLU -lGLEW `pkg-config --static --libs glfw3`

intro_files = intro.c

all: intro

intro: $(intro_files)
	$(CC) $(opts) $(intro_files) -o $@ $(GLlib)

clean:
	rm intro *.o

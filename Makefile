OS := $(shell uname)

ifeq ($(OS), Darwin)
	# Check if its in MAC OS
	LIBS = -framework OpenGL -framework GLUT
else
	# Check if its Linux
	LIBS = -lGL -lglut -lGLEW -lglfw
endif

all: srcPrep sky

srcPrep: *.h
	g++ -c *.cpp $(LIBS)


sky: *.o *.h
	g++ -o sky *.o $(LIBS)

clean:
	rm -rf *.o sky


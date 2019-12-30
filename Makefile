LIBS=-framework OpenGL -framework GLUT

all: srcPrep sky

srcPrep: *.h
	g++ -c *.cpp $(LIBS)


sky: *.o *.h
	g++ -o sky *.o $(LIBS)

clean:
	rm -rf *.o sky


all: executable

executable: main.o polygon.o
	g++ -std=c++17 main.o polygon.o -o executable
main.o: main.cpp
	g++ -std=c++17 -c main.cpp -o main.o
polygon.o: Polygon.cpp
	g++ -std=c++17 -c Polygon.cpp -o polygon.o

clean:
	rm -f *.o executable

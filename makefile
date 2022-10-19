all: 	main.o Complex.o
	g++ main.o Complex.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

Complex.o: Complex.cpp Complex.hpp
	g++ -c Complex.cpp

clean:
	rm *.o a.out

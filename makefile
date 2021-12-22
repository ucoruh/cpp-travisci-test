CC = g++
std = -std=c++11

complex: complex.cpp
	$(CC) $(std) -c complex.cpp -o complex.o


main: main.cpp complex.o
	$(CC) $(std) main.cpp -o main.exe complex.o


tests: complex.cpp testrunner.cpp complexTests.cpp
	cxxtestgen --error-printer -o testrunner.cpp complexTests.cpp
	$(CC) $(std) -c complex.cpp -o complex.o
	$(CC) $(std) -o simple_test.out -I cxxtest/ \testrunner.cpp complex.o
	./simple_test.out
	
main.zip:
	zip -r main.zip main.exe

clear: 
	rm -f *.out *.o 	
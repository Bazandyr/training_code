#Makefile for project
result_code: main.o searching_alg.o sorting_alg.o
	g++ -o result_code main.o searching_alg.o  sorting_alg.o

main.o: main.cpp
	g++ -c main.cpp

searching_alg.o: searching_alg.cpp
	g++ -c searching_alg.cpp

sorting_alg.o: sorting_alg.cpp
	g++ -c sorting_alg.cpp	

clean:
	rm -f *.o result_code
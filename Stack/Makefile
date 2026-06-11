cc = g++
IN = -I./include


main: main.o evaluatePost.o
	$(cc) $(IN) main.o evaluatePost.o -o main
main.o: main.cpp
	$(cc) $(IN) -c main.cpp 
evaluatePost.o: src/evaluatePost.cpp
	$(cc) $(IN) -c src/evaluatePost.cpp


test: 
	$(cc) $(IN) test.cpp src/evaluatePost.cpp -o test

.PHONY: clean
clean:
	del main main.o evaluatePost.o 

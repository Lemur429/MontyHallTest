monty: monty.o
	g++ ./build/monty.o -o monty 

monty.o: monty.cpp
	g++ -c monty.cpp -o ./build/monty.o

clean:
	rm ./build/*.o monty

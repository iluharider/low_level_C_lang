all: lab1
bin/main.o: src/main.c include/names_io.h include/names_util.h include/names_algorithm.h
	gcc -c src/main.c -o bin/main.o
bin/algorithm.o: src/algorithm.c include/names_algorithm.h
	gcc -c src/algorithm.c -o bin/algorithm.o
bin/io.o: src/io.c include/names_io.h
	gcc -c src/io.c -o bin/io.o
bin/util.o: src/util.c include/names_util.h
	gcc -c src/util.c -o bin/util.o
lab1: bin/algorithm.o bin/io.o bin/util.o bin/main.o
	gcc bin/algorithm.o bin/io.o bin/util.o bin/main.o -o lab1
clean:
	rm bin/*.o lab1


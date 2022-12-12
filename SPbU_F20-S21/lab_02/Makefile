all: lab_02
obj/:
	mkdir obj/
obj/test.o: src/test.c include/test_str.h 
	gcc -c src/test.c -o obj/test.o -I include/
obj/test_str.o: src/test_str.c include/test_str.h
	gcc -c src/test_str.c -o obj/test_str.o -I include/
obj/str.o: src/str.c include/str.h
	gcc -c src/str.c -o obj/str.o -I include/
lab_02: obj/ obj/str.o obj/test_str.o obj/test.o
	gcc obj/test.o obj/str.o obj/test_str.o -o  lab_02
clean:
	rm obj/*.o lab_02

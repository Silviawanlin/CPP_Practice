a.out: main.o display.o head.h
	g++ main.o display.o
main.o: main.cpp head.h
	g++ main.cpp -c
display.o: display.cpp head.h
	g++ display.cpp -c
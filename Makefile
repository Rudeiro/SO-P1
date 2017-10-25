all:
	g++ -pthread main.cpp
run: main.cpp
	./a.out

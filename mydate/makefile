date.exe : main.o mydate.o
	g++ -std=c++11 main.o mydate.o -o date.exe

main.o : main.cpp mydate.o
	g++ -std=c++11 -c main.cpp

mydate.o : mydate.h mydate.cpp
	g++ -std=c++11 -c mydate.cpp

clean : 
	rm *.o date.exe

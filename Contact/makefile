contact.exe : main.o ContactNode.o
	g++ -std=c++11 main.o ContactNode.o -o contact.exe

main.o : main.cpp ContactNode.o
	g++ -std=c++11 -c main.cpp

mydate.o : ContactNode.h ContactNode.cpp
	g++ -std=c++11 -c ContactNode.cpp

clean : 
	rm *.o contact.exe

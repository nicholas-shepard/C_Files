myprog.exe : main.o Runner.o Runners.o
	g++ -std=c++11 main.o Runner.o Runners.o -o myprog.exe

main.o : main.cpp Runner.cpp Runners.cpp Runner.h Runners.h
	g++ -std=c++11 -c main.cpp

Runner.o : Runner.cpp Runner.h
	g++ -std=c++11 -c Runner.cpp

Runners.o : Runner.cpp Runner.h Runners.cpp Runners.h
	g++ -std=c++11 -c Runners.cpp

clean :
	rm *.o myprog.exe

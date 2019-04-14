myprog.exe : main.o Card.o Deck.o Blackjack.o
	g++ -std=c++11 main.o Card.o Deck.o Blackjack.o -o myprog.exe

main.o : main.cpp Card.cpp Deck.cpp Card.h Deck.h
	g++ -std=c++11 -c main.cpp

Card.o : Card.cpp Card.h
	g++ -std=c++11 -c Card.cpp

Deck.o : Card.cpp Card.h Deck.cpp Deck.h
	g++ -std=c++11 -c Deck.cpp

Blackjack.o : Card.cpp Card.h Deck.cpp Deck.h Blackjack.cpp Blackjack.h
	g++ -std=c++11 -c Blackjack.cpp

clean :
	rm *.o myprog.exe

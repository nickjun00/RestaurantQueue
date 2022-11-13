testqueue: TestQueue.o Queue.o LinkedList.o Node.o
	g++ --std=c++11 TestQueue.o Queue.o LinkedList.o Node.o -o testqueue

TestQueue.o: TestQueue.cpp Queue.h 
	g++ --std=c++11 -g -Wall -c TestQueue.cpp

Queue.o: Queue.cpp Queue.h LinkedList.h
	g++ --std=c++11 -g -Wall -c Queue.cpp

LinkedList.o: LinkedList.cpp LinkedList.h Node.h
	g++ --std=c++11 -g -Wall -c LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ --std=c++11 -g -Wall -c Node.cpp

clean:
	rm -f *.o testqueue
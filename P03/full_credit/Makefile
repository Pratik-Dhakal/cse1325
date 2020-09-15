CXXFLAGS = --std=c++17

main: main.o Board.o Tile.o
	$(CXX) $(CXXFLAGS) Board.o Tile.o main.o -o main

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Board.o: Board.cpp *.h
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

Tile.o: Tile.cpp *.h
	$(CXX) $(CXXFLAGS) -c Tile.cpp -o Tile.o

clean:
	rm -f *~ a.out *.gch *.o class *.exe
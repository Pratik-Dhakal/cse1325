CXXFLAGS = --std=c++17

modulo: main.o Modulo.o
	$(CXX) $(CXXFLAGS) -c main.o Modulo.o -o modulo

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Modulo.c: Modulo.cpp *.h
	$(CXX) $(CXXFLAGS) -c Modulo.cpp -o Modulo.o

clean:
	rm -f *~ a.out *.gch *.o modulo *.exe
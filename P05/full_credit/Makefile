CXXFLAGS = --std=c++17

main: main.o Gate.o Or.o And.o
	$(CXX) $(CXXFLAGS) Gate.o Or.o And.o -o main

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Gate.o: Gate.cpp *.h
	$(CXX) $(CXXFLAGS) -c Gate.cpp -o Gate.o

Or.o: Or.cpp *.h
	$(CXX) $(CXXFLAGS) -c Or.cpp -o Or.o

And.o: And.cpp *.h
	$(CXX) $(CXXFLAGS) -c And.cpp -o And.o

clean:
	rm -f *~ a.out *.gch *.o main *.exe
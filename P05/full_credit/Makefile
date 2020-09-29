CXXFLAGS = --std=c++17

main: main.o Gate.o And.o Or.o
	$(CXX) $(CXXFLAGS) Gate.o And.o Or.o -o test

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Gate.o: Gate.cpp *.h
	$(CXX) $(CXXFLAGS) -c Gate.cpp -o Gate.o

And.o: And.cpp *.h
	$(CXX) $(CXXFLAGS) -c And.cpp -o And.o

Or.o: Or.cpp *.h
	$(CXX) $(CXXFLAGS) -c Or.cpp -o Or.o

clean: 
	rm -f *~ a.out *.gch *.o test *.exe
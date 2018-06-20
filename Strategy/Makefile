OBJ = main.o
CXX = g++
CXXFLAGS = -std=c++11 
PROGRAM = strategyPattern

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc strategyclass.h classCollection.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(PROGRAM)

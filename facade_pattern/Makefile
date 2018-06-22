CXX = g++
CXXFLAGS = -std=c++11
PROGRAM = facade_pattern
OBJ = main.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc facade_class.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean: 
	rm $(PROGRAM) $(OBJ)

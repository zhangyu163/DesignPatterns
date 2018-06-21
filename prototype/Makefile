CXX = g++
CXXFLAGS = -std=c++11
PROGRAM = prototype_pattern
OBJ = main.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc prototype_class.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean: 
	rm $(OBJ) $(PROGRAM)



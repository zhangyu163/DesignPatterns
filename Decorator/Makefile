CXX = g++
CXXFLAGS = -std=c++11
OBJ = main.o
PROGRAM = decorator_pattern

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc personClass.h decoratorClass.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(PROGRAM) $(OBJ)

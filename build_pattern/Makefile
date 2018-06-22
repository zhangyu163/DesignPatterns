CXX = g++
CXXFLAGS = -std=c++11
PROGRAM = build_pattern
OBJ = main.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc build_class.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean: 
	rm $(OBJ) $(PROGRAM)



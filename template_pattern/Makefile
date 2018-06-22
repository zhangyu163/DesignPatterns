CXX = g++
CXXFLAGS = -std=c++11
OBJ = main.o
PROGRAM = template_pattern

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc template_class.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(PROGRAM) $(OBJ)

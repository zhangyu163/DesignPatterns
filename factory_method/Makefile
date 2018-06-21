CXX = g++
CXXFLAGS = -std=c++11
PROGRAM = factory_method
OBJ = main.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc leifeng_class.h leifeng_factory_class.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(PROGRAM)

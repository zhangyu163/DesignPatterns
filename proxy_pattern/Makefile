CXX = g++
CXXFLAGS = -std=c++11
OBJ = main.o
PROGRAM = proxy_pattern

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

$(OBJ): main.cc proxy_class.h school_girl.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(PROGRAM) $(OBJ)

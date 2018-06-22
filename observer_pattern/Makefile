CXX = g++
CXXFLAGS = -std=c++11
OBJ = main.o observer_class.o notifier_class.o
PROGRAM = observer_pattern

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(PROGRAM) $(OBJ)

CXX = g++
CXXFLAGS = -std=c++11
TARGET = state_pattern
SOURCES = main.cc\
		  work_class.cc\
		  state_class.cc
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^

$.o: %.cc
	$(CXX) $(CXXFLAGS) -c $@ $<

.PHONY: clean
clean:
	rm $(TARGET) $(OBJ)

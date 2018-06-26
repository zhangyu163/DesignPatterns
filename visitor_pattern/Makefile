CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  state.cc\
		  person.cc
OBJ = $(SOURCES:.cc=.o)
TARGET = visitor_pattern

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)

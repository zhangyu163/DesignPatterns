CXX = g++
CXXFLAGS = -std=c++11 -g
TARGET = interpret_pattern
SOURCES = main.cc\
		  context.cc\
		  interpret.cc
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)



CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  iterator_class.cc\
		  aggregate.cc
OBJ = $(SOURCES:.cc=.o)
TARGET = iterator_pattern

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o:%.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(TARGET) $(OBJ)

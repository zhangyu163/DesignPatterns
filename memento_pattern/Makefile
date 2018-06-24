CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  gamerole_class.cc\
		  memento_class.cc\
		  memento_taker_class.cc
TARGET = memento_pattern
OBJ = $(SOURCES:.cc=.o)

$(TARGET):$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^

%.o:%.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)

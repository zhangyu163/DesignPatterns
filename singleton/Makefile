CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  singleton.cc
TARGET = singleton_pattern
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)
	


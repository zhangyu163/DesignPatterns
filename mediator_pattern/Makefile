CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  country.cc\
		  mediator.cc
OBJ = $(SOURCES:.cc=.o)
TARGET = mediator_pattern

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean: 
	rm $(OBJ) $(TARGET)
	

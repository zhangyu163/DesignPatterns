CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  phone_class.cc\
		  soft_class.cc
TARGET = bridge_pattern
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean: 
	rm $(TARGET) $(OBJ)


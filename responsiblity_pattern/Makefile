CXX = g++ 
CXXFLAGS = -std=c++11
TARGET = responsibility_pattern
SOURCES = main.cc\
		  request.cc\
		  manager.cc
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)



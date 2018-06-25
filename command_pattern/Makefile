CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  baker.cc\
		  waiter.cc\
		  command.cc
TARGET = command_pattern
OBJ = $(SOURCES:.cc=.o) 

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o:%.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY:clean
clean:
	rm $(OBJ) $(TARGET)


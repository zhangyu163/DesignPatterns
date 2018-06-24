CXX = g++
CXXFLAGS = -std=c++11 
TARGET = adapter_pattern
SOURCES = main.cc\
		  player_class.cc\
		  adapter_class.cc\
		  foreigncenter_class.cc
OBJ = $(SOURCES:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(TARGET) $(OBJ)


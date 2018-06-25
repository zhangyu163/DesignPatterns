CXX = g++
CXXFLAGS = -std=c++11
SOURCES = main.cc\
		  website.cc\
		  user.cc\
		  web_factory.cc
OBJ = $(SOURCES:.cc=.o)
TARGET = flyweight_pattern

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)


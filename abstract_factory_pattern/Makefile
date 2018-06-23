CXX = g++
CXXFLAGS = -std=c++11
PROGRAM = abstract_factory_pattern
SOURCES = main.cc create_factory_class.cc table_operation_class.cc table_class.cc 
OBJS = $(SOURCES:.cc=.o)
$(PROGRAM):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm $(PROGRAM) $(OBJS)

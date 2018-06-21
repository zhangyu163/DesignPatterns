CXX = g++
CFLAGS = -c
OBJ = main.o

edit: $(OBJ)
	$(CXX) -std=c++11 $(OBJ) -o edit

main.o: main.cc classCollection.h
	$(CXX) -std=c++11 $(CFLAGS) $<

.PHONY: clean
clean:
	rm $(OBJ) edit

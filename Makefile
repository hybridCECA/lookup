# the compiler:	gcc	for	C program, define as g++ for C++
  CC = g++
 
  #	compiler flags:
  #	 -g		- this flag	adds debugging information to the executable file
  #	 -Wall	- this flag	is used	to turn	on most	compiler warnings
  CFLAGS  =	-g -Wall
 
  #	The	build target 
  TARGET = test
 
  all: $(TARGET)
 
  $(TARGET): $(TARGET).cpp lookup.cpp
				$(CC) $(CFLAGS)	-o $(TARGET) $(TARGET).cpp lookup.cpp
 
  clean:
				$(RM) $(TARGET)

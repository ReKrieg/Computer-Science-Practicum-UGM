# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Assignment 3
SRC = Assignment 3.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Assignment 3.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	./$(TARGET) test

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test

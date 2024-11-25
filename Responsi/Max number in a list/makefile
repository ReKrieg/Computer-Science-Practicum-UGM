# Define the compiler
CXX = g++

# Define any compiler flags
CXXFLAGS = -Wall -std=c++11

# Define the source file and the output executable
SRC = Responsi1.cpp
TARGET = Responsi1

# Default rule to build the executable
all: $(TARGET)

# Rule to compile the target from the source
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up by removing the executable
clean:
	rm -f $(TARGET)

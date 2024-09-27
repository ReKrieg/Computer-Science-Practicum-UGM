# Makefile

CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = FizzbuzzReversed

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) FizzbussReversed.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	./$(TARGET) > output.txt
	diff output.txt expected_output.txt

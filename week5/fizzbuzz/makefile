# Makefile

CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = fizzbuzz

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	./$(TARGET) > output.txt
	diff output.txt expected_output.txt

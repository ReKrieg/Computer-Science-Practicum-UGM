# Makefile

CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = Fizzbuzz

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) Fizzbuzz.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	./$(TARGET) > output.txt
	diff output.txt expected_output.txt

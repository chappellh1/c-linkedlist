CXX = g++
CXXFLAGS = -Wall -g -std=c++11
GTEST_DIR = /path/to/gtest
GTEST_LIB = $(GTEST_DIR)/lib
GTEST_INCLUDE = $(GTEST_DIR)/include
TARGET = myprogram
TEST_TARGET = node_test

# Object files for the main application
OBJECTS = main.o Node.o

# Object files for the tests
TEST_OBJECTS = NodeTest.o Node.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Node.o: Node.cpp
	$(CXX) $(CXXFLAGS) -c Node.cpp

# Rule for compiling test code
tests: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJECTS)
	$(CXX) $(CXXFLAGS) -isystem $(GTEST_INCLUDE) -pthread $(TEST_OBJECTS) $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a -o $(TEST_TARGET)

NodeTest.o: NodeTest.cpp
	$(CXX) $(CXXFLAGS) -isystem $(GTEST_INCLUDE) -pthread -c NodeTest.cpp

# Rule for running tests
test: tests
	./$(TEST_TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

.PHONY: all clean test

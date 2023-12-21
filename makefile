# Compiler settings - Can be customized.
CXX = g++
CXXFLAGS = -Wall -g

# Makefile settings - the file extension for C++ files
EXT = .cpp

# Define targets
TARGET = myprogram
SOURCES = main.cpp node.cpp
OBJECTS = $(SOURCES:$(EXT)=.o)

# The first target is the default, builds the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# To obtain object files
%.o: %$(EXT)
	$(CXX) $(CXXFLAGS) -c $<

# To remove generated files
clean:
	rm -f $(OBJECTS) $(TARGET)

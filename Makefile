# Compiler
CXX = g++-13

# Compiler flags
CXXFLAGS = -Wall -Iinclude/

# Source files
SOURCES = $(wildcard src/*.cpp)

# Output executable
OUTPUT = MyZooApp.out

all:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)

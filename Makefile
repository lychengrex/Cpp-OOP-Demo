# Compiler to use
CXX = g++-13

# Compiler flags
CXXFLAGS = -Wall -std=c++14

# Directories
SRC_DIR = src/
INCLUDE_DIR = include/
OBJ_DIR = obj/
BIN_DIR = bin/

# Files
SOURCES = $(wildcard $(SRC_DIR)*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)
EXECUTABLE = $(BIN_DIR)MyZooApp

# Targets
all: directories $(EXECUTABLE)

directories: 
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ_DIR)*.o $(EXECUTABLE)

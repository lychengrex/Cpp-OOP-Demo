# Compiler and Compiler Flags
# ---------------------------
# The CXX variable sets the compiler to be used.
# The CXXFLAGS variable sets the flags for the compiler.
CXX = g++-13
CXXFLAGS = -Wall -std=c++14

# Directories
# -----------
# Organize the project into separate directories for source code, object files, and binaries.
SRC_DIR = src/
INCLUDE_DIR = include/
OBJ_DIR = obj/
BIN_DIR = bin/

# Files and Targets
# -----------------
# The SOURCES variable contains all .cpp files in the SRC_DIR.
# The OBJECTS variable converts .cpp files in SOURCES to .o files.
# The EXECUTABLE variable defines the final binary to be created.
SOURCES = $(wildcard $(SRC_DIR)*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)
EXECUTABLE = $(BIN_DIR)MyZooApp

# Phony Targets
# -------------
# Phony targets are always executed.
.PHONY: all directories clean

# Default Target (all)
# ---------------------
# The default target is 'all', which will ensure the 'directories' target and the 'EXECUTABLE' target are made.
all: directories $(EXECUTABLE)

# Directories Target
# ------------------
# This target creates the necessary directories if they don't exist.
directories: 
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)

# Executable Target
# -----------------
# This target creates the final executable by linking all object files.
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Object Files Target
# -------------------
# This target compiles .cpp files into .o files.
# The -I flag indicates that we include headers from the INCLUDE_DIR.
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean Target
# ------------
# This target removes all compiled object and executable files.
clean:
	rm -f $(OBJ_DIR)*.o $(EXECUTABLE)

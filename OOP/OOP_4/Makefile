
\CXX = g++
CXXFLAGS = -Wall -Werror -std=c++17 -O2

SRC_DIR = src
INC_DIR = include
OUT_DIR = out

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(INC_DIR)/*.h)

OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

EXECUTABLE = $(OUT_DIR)/oop_project

all: $(OUT_DIR) $(EXECUTABLE)

$(OUT_DIR):
	@mkdir -p $(OUT_DIR) || (echo "Error creating directory $(OUT_DIR)" && exit 1)


$(EXECUTABLE): $(OBJECTS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
	rmdir $(OUT_DIR) 2>/dev/null  #Ignore error if empty
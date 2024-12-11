CXX = g++
CXXFLAGS = -Wall -Werror -std=c++17

SOURCES = src/main.cpp src/MemoryRepository.cpp 
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = out/oop_project

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
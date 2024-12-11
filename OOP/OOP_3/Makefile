CXX = g++
CXXFLAGS = -Wall -Werror -std=c++17
SOURCES = src/Logger.cpp src/main.cpp # Указываем конкретные файлы
HEADERS = include/Logger.h
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = out/oop_project

all: mkdir_out $(EXECUTABLE)

mkdir_out:
ifeq ($(shell test -d out 2>/dev/null; echo $$?),0)
	@echo "Directory 'out' already exists."
else
	@mkdir -p out
	@echo "Directory 'out' created."
endif

$(EXECUTABLE): $(OBJECTS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
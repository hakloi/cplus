# Makefile
CXX = g++
CXXFLAGS = -Wall -Werror -I include
SRC = src/main.cpp src/student.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = out/program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

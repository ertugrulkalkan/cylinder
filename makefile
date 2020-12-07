CXX = g++
CXXFLAGS = -I ./include
BUILD = ./build

all: main

main: circle.o cylindir.o
	$(CXX) $(CXXFLAGS) ./main.cpp $(BUILD)/* -o $(BUILD)/main.bin
	$(BUILD)/main.bin

circle.o: directory
	$(CXX) $(CXXFLAGS) -c ./src/circle.cpp -o $(BUILD)/circle.o

cylindir.o: directory
	$(CXX) $(CXXFLAGS) -c ./src/cylinder.cpp -o $(BUILD)/cylinder.o

directory:
	mkdir -p $(BUILD)

.PHONY: clean
clean:
	rm -rf $(BUILD)
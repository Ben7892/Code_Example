all: HollowBox.o Box.o hw hw.o FilledBox.o FancyBox.o

hw: hw.cpp HollowBox.h Box.h FilledBox.h FancyBox.h
	g++ -std=c++17 -Wall -Wextra -o hw hw.cpp HollowBox.cpp Box.cpp FilledBox.cpp FancyBox.cpp

Box.o: Box.cpp
	g++ -std=c++17 -c Box.cpp

HollowBox.o: Box.cpp HollowBox.cpp
	g++ -std=c++17 -c HollowBox.cpp

FilledBox.o: FilledBox.cpp Box.cpp
	g++ -std=c++17 -c FilledBox.cpp

FancyBox.o: FancyBox.cpp Box.cpp
	g++ -std=c++17 -c FancyBox.cpp

clean: 
	rm -f hw Box.o HollowBox.o FancyBox.o

.PHONY: clean all

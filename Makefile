# VSCode won't use this file, but it's here if YOU want to use it.

Main: ./src/main.cpp
	g++ ./src/main.cpp -I/Library/Frameworks/SDL2.framework/Headers -F/Library/Frameworks -framework SDL2 -o ./out/main
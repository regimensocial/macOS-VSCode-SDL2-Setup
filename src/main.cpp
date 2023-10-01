#include <iostream>
#include <SDL.h>
#include <stdio.h>

using namespace std;

int main() {
    // print to console
    cout << "Hello World!" << endl;
    
    // initialise SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // SDL has shat the bed
        cout << "SDL could not initialise! SDL_Error: " << SDL_GetError() << endl;
    } else {
        // SDL is working
        cout << "Welcome to the game!" << endl;
    }

    return 0;
}

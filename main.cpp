#include <SDL.h>


// SDL Window and Surface for pixel manipulation
SDL_Window *window = NULL;
SDL_Surface *surface = NULL;



// Width and height of cell size in pixels
unsigned int CELL_SIZE = 1;
unsigned  CELLMAP_WIDTH = 200;
unsigned CELLMAP_HEIGHT = 200; 

// Screen length and width
unsigned int SCREEN_WIDTH = CELLMAP_WIDTH * CELL_SIZE;
unsigned int SCREEN_HEIGHT = CELLMAP_HEIGHT * CELL_SIZE;



void DrawCell(unsigned int x, unsigned int y, unsigned int colour) {
    Uint8* pixel_ptr =  (Uint8*)surface->pixels + (y * CELL_SIZE * SCREEN_WIDTH + x * CELL_SIZE) * 4;

    for (unsigned int i = 0; i < CELL_SIZE; i++) {
        for (unsigned int j = 0; j < CELL_SIZE; j++) {
            *(pixel_ptr + j * 4) = colour;
            *(pixel_ptr + j * 4 + 1) = colour;
            *(pixel_ptr + j * 4 + 2) = colour;
        }

        pixel_ptr += SCREEN_WIDTH * 4;
    }
}

int main(int argc, char * argv[]) {
    // SDL Boilerplate
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Conway's game of life", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
    SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    
    surface = SDL_GetWindowSurface(window);
    // SDL Event Handler
    SDL_Event e;

    // Rendering Loop
    bool quit = false;
    while (!quit){
        while (SDL_PollEvent(&e) != 0)
            if (e.type == SDL_QUIT) quit == true;

        // Update frame buffer
        SDL_UpdateWindowSurface(window);
    }

    // Clean up SDL
    SDL_DestroyWindow(window);
    // Quit
    SDL_Quit();
    return 0;
}
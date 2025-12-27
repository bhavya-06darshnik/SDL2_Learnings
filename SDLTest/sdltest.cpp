#include <SDL.h>

int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "SDL2 Test",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        SDL_Quit();
        return 1;
    }

    SDL_Delay(2000);

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

#include <SDL.h>
#include <iostream>

int main() {
    int width = 1280;
    int height = 720;
    SDL_Rect sdlRect;
    sdlRect.w = width / 30;
    sdlRect.h = height / 10;
    sdlRect.x = width / 2 - sdlRect.w / 2;
    sdlRect.y = height / 2 - sdlRect.h / 2;
    
    int numPixelsToMovePerFrame = sdlRect.w / 4;

    bool upArrowDown;
    bool leftArrowDown;
    bool rightArrowDown;
    bool downArrowDown;

    SDL_Window* window = nullptr;
    SDL_Renderer* render = nullptr;
    bool appIsRunning = true;

    Uint64 lastDrawTime = SDL_GetTicks64();
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not be initialized " << SDL_GetError() << std::endl; 
        exit(1);
    } else {
        std::cout << "SDL initialized" << std::endl;
    }

    window = SDL_CreateWindow(
        "Title",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        width,
        height,
        SDL_WINDOW_SHOWN
    );
    if (window == NULL) {
        std::cerr << "could not be rendered" << SDL_GetError() << std::endl; 
        exit(1);
    }

    render = SDL_CreateRenderer(window, -1, 0);
    if (render == nullptr) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    unsigned long long numMilisToThrottle = 6;
    while(appIsRunning) {
        while(SDL_GetTicks64() - lastDrawTime < numMilisToThrottle) {
            //std::cout << "lastDraw dif" << std::endl;
        }

        SDL_Event e;
        while(SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                appIsRunning = false;
            }
        }

        std::cout << "debug" << std::endl; 

        SDL_SetRenderDrawColor(render, 120, 50, 20, 255);
        SDL_RenderClear(render);
        SDL_RenderPresent(render);
        
        SDL_SetRenderDrawColor(render, 255, 105, 185, SDL_ALPHA_OPAQUE);
        SDL_RenderFillRect(render, &sdlRect);
        SDL_RenderPresent(render);


        lastDrawTime = SDL_GetTicks64();
    }
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

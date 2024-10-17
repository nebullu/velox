#include "window.h"
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

Window::Window(uint32_t width, uint32_t height) {
    size(width, height);

    title("New Window");
}

Window::init() {
    // init the library, here we make a window so we only need the Video capabilities.
    if (SDL_Init(SDL_INIT_VIDEO)) {
        return SDL_Fail();
    }

    // create a window
    SDL_Window* window = SDL_CreateWindow("Window", 352, 430, SDL_WINDOW_RESIZABLE);
    if (!window) {
        return SDL_Fail();
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
    if (!renderer) {
        return SDL_Fail();
    }

    SDL_ShowWindow(window);
    {
        int width, height, bbwidth, bbheight;
        SDL_GetWindowSize(window, &width, &height);
        SDL_GetWindowSizeInPixels(window, &bbwidth, &bbheight);
        SDL_Log("Window size: %ix%i", width, height);
        SDL_Log("Backbuffer size: %ix%i", bbwidth, bbheight);
        if (width != bbwidth) {
            SDL_Log("This is a highdpi environment.");
        }
    }
}

Window::draw_box() {
}

Window::draw() {
    draw_box();

    for (Component c : _components) {
        c.draw();
    }
}

Window::show() {
    this->show();
    draw();
}

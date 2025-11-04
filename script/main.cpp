#include <SDL2/SDL.h>
#include <iostream>

#include "hpp_files/game.hpp"
Game *game = nullptr;

int main(int argc, char* argv[]) {
    game = new Game();

    game->init("SKELETRON",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1000,500,false);

    while(game->running()){
        game->handleEvents();
        game->update();
        game->render();

    }
    game->clean();
    return 0;
}
#include <SDL2/SDL.h>

#include <Tetris.h>

bool running = true;

int main(int argc, char **args) {

    TetrisWindow* tetrisWindow = new TetrisWindow();

    tetrisWindow->start();

    return 0;
}









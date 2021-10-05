//
// Created by burlingk on 10/1/2021.
//

#ifndef TETRIS_TETRIS_H
#define TETRIS_TETRIS_H
#include <SDL2/SDL.h>
#include <shapes.h>

typedef struct {
    Uint8 r;
    Uint8 g;
    Uint8 b;
} BlockColor;

typedef struct {
    bool isFilled;
    BlockColor color;
} BoardVal;

typedef struct {
    int center_x;
    int center_y;
    BlockColor color;
    Shape shape;
    int orientation; //0 = default; 1 = Rotated 90 degrees; 2 = rotated 180 degrees; 3 = rotated 270 degrees.
} Tetromino;


//Basic Configuration. This will probably all change eventually.
#define BOARD_HEIGHT 20
#define BOARD_WIDTH 10
#define BLOCK_SIZE 32
#define X_OFFSET 25
#define Y_OFFSET 25
#define RIGHT_MARGIN 200
#define BOTTOM_MARGIN 25


typedef struct {
    BoardVal board[BOARD_HEIGHT][BOARD_WIDTH];
} GameData;

class TetrisWindow {

    bool running; //Keep track of whether the app is still running.
    SDL_Renderer* tetrisRenderer = nullptr; //nullptr is more idiomatic now than null
    SDL_Window*  tetrisWindow = nullptr;



    int m_x;
    int m_y;
    int m_w;
    int m_h;
    Uint32 m_flags;

    GameData m_data;
    BlockColor m_backgroundColor;
    BlockColor m_gridColor;
    Tetromino m_active;



    GameData Initialize(void);
    void HandleInput(void);
    void UpdateProgram(void);
    void RenderProgram(void);
    void RenderBoard(void);  //Since I am using a class to hold it all, nothing needs to be passed here.
    void DrawGrid(void);
    void PresentScreen(void);
    void wait(void);

    void DrawBlock(int x, int y, BlockColor color);
    void DrawBlocks(void);


public:
    //Default Constructor
    TetrisWindow(void);
    //Fancy Constructor
    TetrisWindow(int x, int y, int w, int h, Uint32 flags);
    void start(void);
    void stop(void);
};


#endif //TETRIS_TETRIS_H

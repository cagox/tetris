//
// Created by burlingk on 10/1/2021.
//

#include <Tetris.h>

BlockColor Orange = {248, 154, 22};
BlockColor Aqua = {0,250,250};
BlockColor  Red = {255,0,0};
BlockColor Yellow = {240, 237, 76};


TetrisWindow::TetrisWindow() {
    m_x = SDL_WINDOWPOS_CENTERED;
    m_y = SDL_WINDOWPOS_CENTERED;
    m_w = X_OFFSET + RIGHT_MARGIN + BOARD_WIDTH * BLOCK_SIZE; // Was 445
    m_h = Y_OFFSET + BOTTOM_MARGIN + BOARD_HEIGHT * BLOCK_SIZE; //was 690
    m_flags = 0;
}

TetrisWindow::TetrisWindow(int x, int y, int w, int h, Uint32 flags) {
    m_x = x;
    m_y = y;
    m_w = w;
    m_h = h;
    m_flags = flags;
}

void TetrisWindow::RenderProgram() {
    SDL_SetRenderDrawColor(tetrisRenderer, m_backgroundColor.r, m_backgroundColor.g, m_backgroundColor.b, SDL_ALPHA_OPAQUE); //Set Backround Color
    SDL_RenderClear(tetrisRenderer); //Clear to Background Color
    RenderBoard();
    SDL_RenderPresent(tetrisRenderer);
}
void TetrisWindow::RenderBoard(void) {
    DrawGrid();
    DrawBlocks();
}

void TetrisWindow::DrawGrid(void) {
    SDL_SetRenderDrawColor(tetrisRenderer, m_gridColor.r, m_gridColor.g, m_gridColor.b, SDL_ALPHA_OPAQUE);
    SDL_Rect gridRect;
    gridRect.x=25; gridRect.y=25; gridRect.w=320; gridRect.h=640;
    SDL_RenderDrawRect(tetrisRenderer, &gridRect);
    int x = gridRect.x;
    int y = gridRect.y;
    for(int i = 0; i < 9; i++){
        x+= 32;
        SDL_RenderDrawLine(tetrisRenderer, x, 25, x, 664);
    }
    for(int i =0; i < 19; i++){
        y+= 32;
        SDL_RenderDrawLine(tetrisRenderer, 25,y,344, y);
    }
}




void TetrisWindow::start() {
    m_backgroundColor = Yellow;
    m_gridColor = Red;
    SDL_Init(0); //Returns 0 on success or negative value on error. Add error checking later.
    tetrisWindow = SDL_CreateWindow("Tetris", m_x, m_y, m_w, m_h, m_flags);
    tetrisRenderer = SDL_CreateRenderer(tetrisWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

    m_data = Initialize();

    //Setting up test "Shape"
    m_data.board[1][3] = {true, Orange};
    m_active.center_x = 3;
    m_active.center_y = 1;
    m_active.color = Orange;
    m_active.orientation = 0;



    while(running) {
        HandleInput();
        UpdateProgram();
        RenderProgram();
        //PresentScreen();
        wait();
    }
}

void TetrisWindow::stop() {
    running = false;
    SDL_DestroyRenderer(tetrisRenderer);
    SDL_DestroyWindow(tetrisWindow);
    SDL_Quit();
}

GameData TetrisWindow::Initialize(void) {
    running = true;
    GameData data;
    for(int y = 0; y < BOARD_HEIGHT; y++){
        for(int x = 0; x < BOARD_WIDTH; x++) {
            data.board[y][x]={false, m_backgroundColor};
        }
    }
    return data;
}
/*
 *  TetrisWindow::DrawBlock(int, int, color) draws a block of a given color
 *  In the cell located at x,y. These values are 0 indexed.
 */
void TetrisWindow::DrawBlock(int x, int y, BlockColor color) {
    int pos_x = X_OFFSET+x*BLOCK_SIZE;
    int pos_y = Y_OFFSET+y*BLOCK_SIZE;
    SDL_SetRenderDrawColor(tetrisRenderer, color.r,color.g,color.b,SDL_ALPHA_OPAQUE);
    SDL_Rect drawRect = {pos_x,pos_y,32,32};
    SDL_RenderFillRect(tetrisRenderer, &drawRect);
}

void::TetrisWindow::DrawBlocks(void) {
    for(int y=0; y < BOARD_HEIGHT; y++) {
        for(int x=0; x < BOARD_WIDTH; x++) {
            if (m_data.board[y][x].isFilled) {
                DrawBlock(x, y, m_data.board[y][x].color);
            }
        }
    }
}


void TetrisWindow::HandleInput(void) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT) {
            stop();
        }
        if(event.type == SDL_KEYUP) {
            if(event.key.keysym.scancode == SDL_SCANCODE_A) {
                int active_x = m_active.center_x;
                int active_y = m_active.center_y;
                if (active_x > 0) {
                    m_data.board[active_y][active_x].isFilled = false;
                    m_data.board[active_y][active_x].color = m_backgroundColor;
                    m_active.center_x--;
                    m_data.board[m_active.center_y][m_active.center_x].isFilled = true;
                    m_data.board[m_active.center_y][m_active.center_x].color = m_active.color;

                }
            }
            if(event.key.keysym.scancode == SDL_SCANCODE_D) {
                int active_x = m_active.center_x;
                int active_y = m_active.center_y;
                if (active_x < BOARD_WIDTH-1) {
                    m_data.board[active_y][active_x].isFilled = false;
                    m_data.board[active_y][active_x].color = m_backgroundColor;
                    m_active.center_x++;
                    m_data.board[m_active.center_y][m_active.center_x].isFilled = true;
                    m_data.board[m_active.center_y][m_active.center_x].color = m_active.color;

                }
            }
            if(event.key.keysym.scancode == SDL_SCANCODE_S) {
                int active_x = m_active.center_x;
                int active_y = m_active.center_y;
                if (active_y < BOARD_HEIGHT-1) {
                    m_data.board[active_y][active_x].isFilled = false;
                    m_data.board[active_y][active_x].color = m_backgroundColor;
                    m_active.center_y++;
                    m_data.board[m_active.center_y][m_active.center_x].isFilled = true;
                    m_data.board[m_active.center_y][m_active.center_x].color = m_active.color;

                }
            }
        }



    }
}



void TetrisWindow::UpdateProgram() {}
void TetrisWindow::PresentScreen() {}
void TetrisWindow::wait() {}




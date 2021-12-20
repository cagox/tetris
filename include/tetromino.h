//
// Created by burlingk on 10/8/2021.
//

#ifndef TETRIS_TETROMINO_H
#define TETRIS_TETROMINO_H

#include <string>

//TODO: Make sure this compiles and runs properly. It is being written directlyin the github editor at the moment. Luckily I am a one man team at the moment.

enum Tetrominoes {
  STRAIGHT=0,
  SQUARE=1,
  TEE=2,
  JAY=3,
  EL=4,
  SKEWS=5,
  SKEWZ=6
}


class Tetromino {
  public:
    Tetromino();
    Tetromino(std::wstring shape);
    ~Tetromino();
    int Rotate(int px, int py); //Return the current "Shape" based on rotation. Was int Rotate(int px, int py, int r);
    bool DoesPieceFit(int nTetromino, int nRotation, int nPosX, int nPosY); //Does the shape fit in the position we are trying to move it into?
    void RotateLeft();
    void RotateRight;
  
  private:
    std::wstring m_shape;
    int m_rotation;
    
  
}


#endif //TETRIS_TETROMINO_H

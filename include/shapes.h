//
// Created by burlingk on 10/2/2021.
//

#ifndef TETRIS_SHAPES_H
#define TETRIS_SHAPES_H

typedef struct {
    int width;            //How wide is the shape at rotation 0
    int height;           //how tall/long is the shape
    int center_y;         //center_x and center_y are the pivot point.
    int center_x;
    int rotations;       //How many rotations does the shape have? Range = 0 - 3

} Shape;


const int SHAPE_SQUARE[4][4] = {
        {1,1,0,0},
        {1,1,0,0},
        {0,0,0,0},
        {0,0,0,0}
};

#endif //TETRIS_SHAPES_H

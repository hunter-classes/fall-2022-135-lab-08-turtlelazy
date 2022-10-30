#include <iostream>
#include "funcs.h"
#include "imageio.h"
#include <iostream>
#include <string>

void task_A(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);
    int output[MAX_H][MAX_W];

    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < w; col++)
        {
            output[row][col] = 255 - img[row][col];
        }
    }

    writeImage("taskA.pgm", output, h, w);
}

void task_B(std::string input)
{
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);
    int output[MAX_H][MAX_W];

    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < w; col++)
        {
            if(col > w / 2){
                output[row][col] = 255 - img[row][col];
            }
            else{
                output[row][col] = img[row][col];
            }
        }
    }

    // and save this new image to file "outImage.pgm"
    writeImage("taskB.pgm", output, h, w);
}

void task_C(std::string input)
{
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);
    int output[MAX_H][MAX_W];

    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < w; col++)
        {
            bool col_condition = col > w / 4 && col < 3 * w / 4;
            bool row_condition = row > h / 4 && row < 3 * h / 4;
            if (col_condition && row_condition)
            {
                output[row][col] = 255;
            }
            else
            {
                output[row][col] = img[row][col];
            }
        }
    }

    // and save this new image to file "outImage.pgm"
    writeImage("taskC.pgm", output, h, w);
}
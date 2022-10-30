#include <iostream>
#include "funcs.h"
#include "imageio.h"
#include <iostream>
#include <string>

void task_A(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w); // read it from the file "inImage.pgm"
    // h and w were passed by reference and
    // now contain the dimensions of the picture
    // and the 2-dimesional array img contains the image data

    // Now we can manipulate the image the way we like
    // for example we copy its contents into a new array
    int out[MAX_H][MAX_W];

    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < w; col++)
        {
            out[row][col] = 255 - img[row][col];
        }
    }

    // and save this new image to file "outImage.pgm"
    writeImage("taskA.pgm", out, h, w);
}

void task_B(std::string input)
{
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);
    int out[MAX_H][MAX_W];

    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < w/2; col++)
        {
            out[row][col] = img[row][col];
        }
    }

    // and save this new image to file "outImage.pgm"
    writeImage("taskB.pgm", out, h, w);
}
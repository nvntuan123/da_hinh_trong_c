#ifndef RECT_H
#define RECT_H

#include <stdio.h>
#include "shape.h"

// 2 hàm ảo được kế thừa từ lớp cha Shape là 2 hàm shapeArea và shapeDraw.
static int rectangleArea(SHAPE const* const);
static void rectangleDraw(SHAPE const* const);

struct Rectangle
{
    SHAPE spBase; // Kế thừa từ struct Shape.

    int IWidth;
    int IHeight;
};

typedef struct Rectangle RECTANGLE;

void rectangleCtor(RECTANGLE* const, int, int, int, int);

int getW(RECTANGLE* const);
int getH(RECTANGLE* const);

static inline int rectangleArea(SHAPE const* const);

static inline void rectangleDraw(const SHAPE* const);

#endif
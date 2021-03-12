#ifndef SHAPE_H
#define SHAPE_H

#include <stdio.h>

struct ShapeVtbl;

struct Shape
{
    struct ShapeVtbl const* VPtr; // Virtual pointer(con trỏ ảo).
    int IX;
    int IY;
};

typedef struct Shape SHAPE;

struct ShapeVtbl
{
    /*
        C++:
        virtual double area() = 0; // Hàm thuần ảo tính diện tích.
	    virtual void draw() = 0; // Hàm thuần ảo vẽ hình.
    */

    int (*area)(SHAPE const*); // area là con trỏ hàm và có tham số đầu vào là con trỏ hằng.
    void (*draw)(SHAPE const* const); // draw là con trỏ hàm và có tham số đầu vào là 
}; // ShapeVtbl => Shape Virtual Table(là bảng con trỏ ảo).

/*
    Constructor C++:
    Shape(...);
*/
void shapeCTor(SHAPE* const, int, int); // Tham số đầu tiên là hằng con trỏ.
void shapeMoveBy(SHAPE* const, int, int);

static inline int shapeArea(SHAPE const* const THIS)
{
    return ((*THIS->VPtr->area)(THIS));
}

static inline void shapeDraw(const SHAPE* const THIS)
{
    return ((*THIS->VPtr->draw)(THIS));
}

#endif
#ifndef SHAPE_H
#define SHAPE_H

#include <stdio.h>

struct ShapeVtbl;

struct Shape
{
    /*
    1. Kiến thức về con trỏ(đặc là bộ nhớ và kích thước).
    2. Kiến về con trỏ hằng.
    3. Kiến thức sâu về struct(đặc là struct liên quan đến biến con trỏ).
    */
    struct ShapeVtbl const* VPtr; // Virtual pointer(con trỏ ảo). Con trỏ hằng.
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

    int (*area)(SHAPE const* const); // area là con trỏ hàm và có tham số đầu vào là con trỏ hằng.
    void (*draw)(SHAPE const* const); // draw là con trỏ hàm và có tham số đầu vào là 
}; // ShapeVtbl => Shape Virtual Table(là bảng con trỏ ảo).

/*
    Constructor C++:
    Shape(...);
*/
void shapeCTor(SHAPE* const, int, int); // Tham số đầu tiên là hằng con trỏ.
void shapeMoveBy(SHAPE* const, int, int);

int shapeGetX(SHAPE* const);
int shapeGetY(SHAPE* const);

static inline int shapeArea(SHAPE const* const THIS)
{
    return ((*THIS->VPtr->area)(THIS));
}

static inline void shapeDraw(SHAPE const* const THIS)
{
    (*THIS->VPtr->draw)(THIS);
}

SHAPE const* areaMax(SHAPE const*[], int);
void drawAllShape(SHAPE const*[], int);

#endif

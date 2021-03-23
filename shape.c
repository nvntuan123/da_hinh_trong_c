#include "shape.h"
#include "assert.h"

// Tham số là con trỏ hằng.
static int shape_Area_(const SHAPE* const);
static void shape_Draw_(const SHAPE* const);

void shapeCTor(SHAPE* const THIS, int IX_T, int IY_T)
{
    static struct ShapeVtbl const Vtbl = {
        &shape_Area_,
        &shape_Draw_
    };
    THIS->VPtr = &Vtbl;
    THIS->IX = IX_T;
    THIS->IY = IY_T;
}

int shapeGetX(SHAPE* const THIS)
{
    return THIS->IX;
}

int shapeGetY(SHAPE* const THIS)
{
    return THIS->IY;
}

void shapeMoveBy(SHAPE* const THIS, int IX_T, int IY_T)
{
    THIS->IX += IX_T;
    THIS->IY += IY_T;
}

SHAPE const* areaMax(SHAPE const* ShapeArr[], int ILengthShape)
{
    SHAPE const* ShapeMax = (SHAPE*)0;
    int IMax = 0;
    for (int i = 0; i < ILengthShape; i++)
    {
        int IArea = shapeArea(ShapeArr[i]); // Gọi hàm ảo ở đây nè ^-^
        if (IArea > IMax)
        {
            IMax = IArea;
            ShapeMax = ShapeArr[i];
        }
    }
    return ShapeMax;
}

void drawAllShape(SHAPE const* ShapeArr[], int ILengthShape)
{
    for (int i = 0; i < ILengthShape; i++)
    {
        shapeDraw(ShapeArr[i]); // Gọi hàm ảo ở đây nè ^-^
    }
}

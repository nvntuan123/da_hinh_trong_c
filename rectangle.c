#include "include/rectangle.h"

static int rectangleArea(SHAPE const* const);
static void rectangleDraw(SHAPE const* const);

// Constructor
void rectangleCtor(RECTANGLE* const RTHIS, int IX_T, int IY_T, int IWidth_T, int IHeight_T)
{
    static struct ShapeVtbl const vtbl = {
        &rectangleArea,
        &rectangleDraw
    };

    shapeCTor(&RTHIS->spBase, IX_T, IY_T);
    RTHIS->spBase.VPtr = &vtbl;
    RTHIS->IWidth = IWidth_T;
    RTHIS->IHeight = IHeight_T;
}

int getW(RECTANGLE* const RTHIS)
{
    return RTHIS->IWidth;
}

int getH(RECTANGLE* const RTHIS)
{
    return RTHIS->IHeight;
}

static int rectangleArea(SHAPE const* const THIS)
{
    RECTANGLE const* const RTHIS = (RECTANGLE const*)THIS;
    return (RTHIS->IWidth * RTHIS->IHeight);
}

static void rectangleDraw(SHAPE const* const THIS)
{
    RECTANGLE const* const RTHIS = (RECTANGLE const*)THIS;
    printf("Rec Draw(x = %d, y = %d, width = %d, height = %d)\n", RTHIS->spBase.IX, RTHIS->spBase.IY, RTHIS->IWidth, RTHIS->IHeight);
}

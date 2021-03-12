#include "shape.h"
#include "assert.h"

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

#include <stdio.h>

void SWAP(int*, int*);

int main()
{
    void (*FPtrSwap)(int*, int*);
    FPtrSwap = SWAP;

    int a = 2;
    int b = 3;

    printf("\nNgon Ngu C\n");
    printf("Truoc Khi Hoan Vi\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    FPtrSwap(&a, &b);

    printf("Sau Khi Hoan Vi\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void SWAP(int* IA, int* IB)
{
    int ITemp = *IA;
    *IA = *IB;
    *IB = ITemp;
}

#include <iostream>
#include <functional>

void SWAP(int&, int&);

int main()
{
    std::function<void(int&, int&)> FPtrCPP = SWAP;

    int a = 2;
    int b = 3;

    std::cout << "\nC Plus Plus\n";
    std::cout << "Truoc Khi Hoan Vi\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    FPtrCPP(a, b);

    std::cout << "Sau Khi Hoan Vi\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    // Con trỏ cấp 2 - tức là con trỏ nâng cao.
    int IValue = 6;
    int* IPtrLevel1 = &IValue;
    int** IPtrLevel2 = &IPtrLevel1;

    std::cout << "----------IValue----------\n";
    std::cout << "1. Gia tri: " << IValue << "\n";
    std::cout << "2. Dia chi: " << &IValue << "\n";
    std::cout << "----------Con Tro Cap 1---------\n";
    std::cout  << "1. Gia tri: " << *IPtrLevel1 << "\n";
    std::cout << "2. Dia chi that: " << &IPtrLevel1 << "\n";
}
void SWAP(int& IA, int& IB)
{
    int ITemp = IA;
    IA = IB;
    IB = ITemp;
}

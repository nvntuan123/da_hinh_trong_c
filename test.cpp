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
}

void SWAP(int& IA, int& IB)
{
    int ITemp = IA;
    IA = IB;
    IB = ITemp;
}

#include <stdio.h>
#include <malloc.h>

#include "include/shape.h"

struct NhanVien
{
    int IID;
    char StrFullName[100];
    int IIDCard;
    char DiaChi[500];
};

typedef struct NhanVien NHANVIEN;

int main()
{
    SHAPE sp;

    int IValue = 6;
    int* IPtr = &IValue;
    int* IPtr1 = (int*)malloc(1 * sizeof(int)); // Hàm cấp phát bộ nhớ cho con trỏ trong c.
    *IPtr1 = 8;

    int* IPtr2 = IPtr1;

    printf_s("IValue = %d", IValue);
    printf_s("\nIPtr = %d", *IPtr);
    printf_s("\nIPtr1 = %d", *IPtr1);
    //printf_s("\nSize int: %d", sizeof(int));

    free(IPtr1); // Hàm giải phóng con trỏ trong c.

    NHANVIEN nv1; // Biến thường có kiểu là nhân viên.
    NHANVIEN* PtrNv; // Biến con trỏ có kiểu là nhân viên.

    printf_s("\nSize nv1: %d", sizeof(nv1)); // 608
    printf_s("\nSize nv2: %d", sizeof(*PtrNv)); // 608 + 4 = 612
}

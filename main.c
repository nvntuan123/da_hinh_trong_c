#include <stdio.h>
#include <malloc.h>

#include "include/rectangle.h"

// struct NhanVien
// {
//     int IID;
//     char StrFullName[100];
//     int IIDCard;
//     char DiaChi[500];
// };

// typedef struct NhanVien NHANVIEN;

int main()
{
    //SHAPE sp;

    /*
    1. 
    IA nó là biến thường => có 2 phần:
    a. Giá trị của biến IA chỉ có thể lưu được 1 con số nào đó vì có kiểu dữ liệu là số nguyên interger.
    b. Địa chỉ(thuộc vùng nhớ stack).

    sp nó là biến thường => nó giống với biến IA.
    Nhưng sẽ khác 1 chỗ là về phần giá trị của nó, vì sp có kiểu dữ liệu struct do dev tự định nghĩa(SHAPE) => giá trị của nó sẽ lưu nhiều phần chứ không phải lưu 1 số như biến IA
    */
    //shapeCTor(&sp, 1, 2); // Hàm constructor của Shape.

    RECTANGLE r1, r2;
    SHAPE const* ShapeArr[] = {
        &r1.spBase,
        &r2.spBase
    };

    SHAPE const *sp;
    rectangleCtor(&r1, 1, 2, 3, 4);
    rectangleCtor(&r2, 5, 6, 8, 9);

    sp = areaMax(ShapeArr, sizeof(ShapeArr) / sizeof(ShapeArr[0]));
    printf("Hinh co dien tich lon nhat:\nx = %d, y = %d");

    // int IValue = 6;
    // int* IPtr = &IValue;
    // int* IPtr1 = (int*)malloc(1 * sizeof(int)); // Hàm cấp phát bộ nhớ cho con trỏ trong c.
    // *IPtr1 = 8;

    // int* IPtr2 = IPtr1;

    // printf_s("IValue = %d", IValue);
    // printf_s("\nIPtr = %d", *IPtr);
    // printf_s("\nIPtr1 = %d", *IPtr1);
    // //printf_s("\nSize int: %d", sizeof(int));

    // free(IPtr1); // Hàm giải phóng con trỏ trong c.

    // NHANVIEN nv1; // Biến thường có kiểu là nhân viên.
    // NHANVIEN* PtrNv; // Biến con trỏ có kiểu là nhân viên.

    // printf_s("\nSize nv1: %d", sizeof(nv1)); // 608
    // printf_s("\nSize nv2: %d", sizeof(*PtrNv)); // 608 + 4 = 612
}

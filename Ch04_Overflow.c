/* 정수 상수 프로그램 */
#include <stdio.h>

int main()
{
    int x = 10;   // 10진수 //10
    int y = 010;  // 8진수  //8
    int z = 0x10; // 16진수 //6
    printf("%d %d %d\n", x, y, z);
    // 10 8 16
    printf("%o %o %o\n", x, y, z); // 영문 소문자 octal
    // 12 10 20
    printf("%x %x %x\n", x, y, z); // hexadecimal
    // a 8 10

    return 0;
}
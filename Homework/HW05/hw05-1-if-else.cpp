/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>

int main() {
    char characters[4];

    printf("Enter 4 characters: ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &characters[i]);
    }

    printf("Result: ");
    for (int i = 3; i >= 0; i--) {
        printf("%c ", characters[i]);
    }
    
    printf("\n");

    return 0;
}
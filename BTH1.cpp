#include <stdio.h>

// Hàm kiểm tra xem số n có phải là bội của 7 không
int isMultipleOf7(int n) {
    return n % 7 == 0;
}

// Hàm chính
int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    
    // Vòng lặp để duyệt qua các số nguyên có 2 chữ số
    for (int i = 10; i <= 99; i++) {
        // Kiểm tra nếu i là bội của 7
        if (isMultipleOf7(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

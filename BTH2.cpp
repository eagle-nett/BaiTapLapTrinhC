#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
    int count = 0;

    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = n - 1; i > 0; i--) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong nho hon %d la: %d\n", n, count);
}

// Hàm chính
int main() {
    int n;

    // Nhập giá trị n từ bàn phím
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra xem n có phải là số nguyên dương hay không
    if (n > 0) {
        printPerfectSquares(n);
    } else {
        printf("Vui long nhap mot so nguyen duong!\n");
    }

    return 0;
}

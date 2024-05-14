#include <stdio.h>

// Hàm thực hiện thuật toán sắp xếp chèn (Insertion Sort)
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Di chuyển các phần tử của arr[0..i-1], lớn hơn key, về sau một vị trí so với vị trí ban đầu của chúng
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Hàm chính
int main() {
    int n;

    // Nhập số lượng phần tử
    printf("Nhap vao so luong phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap vao %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm sắp xếp chèn để sắp xếp mảng
    insertionSort(arr, n);

    // In ra mảng đã được sắp xếp
    printf("Mang sau khi sap xep theo thu tu tang dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

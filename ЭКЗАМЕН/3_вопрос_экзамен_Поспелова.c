#include <stdio.h>

void rotateLeft(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Циклически сдвигаем элементы массива на две позиции влево
    for (int i = 0; i < 2; i++) {
        rotateLeft(arr, n);
    }

    // Выводим измененный массив
    printf("Измененный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {3, -5, 2, 7, -8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Найдем максимальный по модулю элемент
    int max_abs = abs(arr[0]);
    int max_index = 0;

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > max_abs) {
            max_abs = abs(arr[i]);
            max_index = i;
        }
    }

    // Изменим знак у максимального по модулю элемента
    arr[max_index] *= -1;

    // Выведем измененный массив
    printf("Измененный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
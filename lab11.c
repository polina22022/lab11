#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define SIZE 1000
int main() {
    int n;
    setlocale(LC_ALL, "RUS");
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int array[SIZE];

    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
    }
    int count = 0;
    for (int i = 0; i < max_index; i++) {
        if (array[i] > 0) {
            count++;
        }
    }

    printf("Количество положительных элементов, расположенных до максимального: %d\n", count);

    return 0;
}

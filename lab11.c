#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int array[n];

    printf("Введите %d целых чисел:\n", n);
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

    printf("Количество положительных элементов до максимального: %d\n", count);

    return 0;
}
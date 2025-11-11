#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    printf("Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ ìàññèâà: ");
    scanf("%d", &n);

    int array[n];

    printf("Ââåäèòå %d öåëûõ ÷èñåë:\n", n);
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

    printf("Êîëè÷åñòâî ïîëîæèòåëüíûõ ýëåìåíòîâ äî ìàêñèìàëüíîãî: %d\n", count);

    return 0;
}
после лабы
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define SIZE 1000
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    printf("Введите  положительных и отрицательных чисел: ");
    scanf("%d", &n);

    int array[SIZE];

    printf("������� %d ����� �����:\n", n);
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

    printf("���������� ������������� ��������� �� �������������: %d\n", count);

    return 0;
}

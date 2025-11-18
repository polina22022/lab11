# Домашнее задание к работе 11
## Условие задачи
 С одномерным массивом, состоящим из n вводимых с клавиатуры
положительных и отрицательных целых чисел выполнить следующие
вычисления: Количество положительных элементов массива, расположенных до
максимального элемента.
## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявление переменных:
3. Определить размер каждого типа данных:
   - Привести адрес второй переменной этого типа к указателю соответствующего типа.
   - Привести адрес первой переменной этого типа к указателю соответствующего типа.
   - Вычислить разницу между этими указателями.
4. **Конец**
### Блок-схема
<img width="134" height="431" alt="image" src="https://github.com/user-attachments/assets/fb3bf16d-3a70-437f-b4bc-ca52cf6157b3" />

https://github.com/polina22022/lab12/blob/master/lab12.drawio



## 2. Реализация программы

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

## 3. Результаты работы программы
char: 32 байт

short int: 16 байт

unsigned short int: 16 байт

int: 8 байт

unsigned char: 32 байт

wchar_t: 16 байт

long long int: 4 байт

size_t: 4 байт

float: 8 байт

double: 4 байт

signed int: 8 байт

## 4. Информация о разработчике
Медведева Полина бИЦ-252

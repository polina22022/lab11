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
#include <stdio.h>

#include <locale.h>

int main() 

{

    setlocale(LC_ALL, "RUS");
    
    char c1, c2;
    
    short s1, s2;
    
    unsigned short us1, us2;
    
    int i1, i2;
    
    unsigned char uc1, uc2;
    
    wchar_t wc1, wc2;
    
    long long ll1, ll2;
    
    size_t st1, st2;
    
    float f1, f2;
    
    double d1, d2;
    
    signed int si1, si2;
    
    printf("char: %ld байт\n", (char*)(&c2) - (char*)(&c1));
    
    printf("short int: %ld байт\n", (short*)(&s2) - (short*)(&s1));
    
    printf("unsigned short int: %ld байт\n", (unsigned short*)(&us2) - (unsigned short*)(&us1));
    
    printf("int: %ld байт\n", (int*)(&i2) - (int*)(&i1));
    
    printf("unsigned char: %ld байт\n", (unsigned char*)(&uc2) - (unsigned char*)(&uc1));
    
    printf("wchar_t: %ld байт\n", (wchar_t*)(&wc2) - (wchar_t*)(&wc1));
    
    printf("long long int: %ld байт\n", (long long*)(&ll2) - (long long*)(&ll1));
    
    printf("size_t: %ld байт\n", (size_t*)(&st2) - (size_t*)(&st1));
    
    printf("float: %ld байт\n", (float*)(&f2) - (float*)(&f1));
    
    printf("double: %ld байт\n", (double*)(&d2) - (double*)(&d1));
    
    printf("signed int: %ld байт\n", (signed int*)(&si2) - (signed int*)(&si1));

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

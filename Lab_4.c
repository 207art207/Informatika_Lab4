#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () { 
    while (1) // Нескінченний цикл для повторного запуску коду
{   
    int n; // Змінна для вибору завдання
    printf ("Choose task:\n 1.Aditional_1 task_3\n 2.Aditional_1 task_11\n 3.Aditional_2 task_6\n 4.Aditional_2 task_10 \n"); // Виведення тексту для вибору завдання
    scanf ("%d", &n); // Зчитування вибраного завдання з клавіатури

if (n==1) {
    double i, j, x; // Змінні, які були дані в умові
    i = 8.7; // Значення змінної i
    j = -12; // Значення змінної j
    x = (int) i * j; // Обчислення значення змінної x
    printf ("i = %.1f \n", i); // Виведення значення змінної i
    printf ("j = %.1f \n", j); // Виведення значення змінної j
    printf ("x = %.1f \n", x); // Виведення значення змінної x 
} // Завдання 1

if (n==2) {
    int t, t1, t2; // Змінні, які були дані в умові
    t = 14; // Значення змінної t
    t1 = t-- + 7; // Обчислення значення змінної t1
    t2 = --t +7; // Обчислення значення змінної t2
    printf ("t = %d \n", t); // Виведення значення змінної t
    printf ("t1 = %d \n", t1); // Виведення значення змінної t1
    printf ("t2 = %d \n", t2); // Виведення значення змінної t2
} // Завдання 2

if (n==3) {
    long int Vl, Th, Td, Sh, Sd; // Змінні, які були дані в умові: Vl - швидкість світла в км/с;Th - час у розмірі 1 години, виражений у секундах;Td - час у розмірі 1 доби, виражений у секундах;Sh - шлях, який світлова хвиля подолає за 1 годину;Sd - шлях, який світлова хвиля подолає за 1 добу
    Vl = 299792; // Значення змінної Vl в км/с
    Th = 3600; // Значення змінної Th в секундах
    Td = 86400; // Значення змінної Td в секундах
    Sh = Vl * Th; // Обчислення значення змінної Sh в км
    Sd = Vl * Td; // Обчислення значення змінної Sd в км
    printf ("Sh = %ld (km) \n", Sh); // Виведення значення змінної Sh у км
    printf ("Sd = %ld (km) \n", Sd); // Виведення значення змінної Sd у км
} // Завдання 3

if (n==4) {
    double Fa, Fb, C; // Змінні, які були дані в умові: Fa - початкова температура у Фарангейтах; Fb - кінцева температура у Фарангейтах; C - температура в Цельсіях
    printf ("Enter Fa: \n"); // Виведення тексту для введення значення Fa
    scanf ("%lf", &Fa); // Зчитування введеного значення для Fa з клавіатури й присвоєння його змінній Fa
    printf ("Enter Fb: \n"); // Виведення тексту для введення значення Fb
    scanf ("%lf", &Fb); // Зчитування введеного значення для Fb з клавіатури й присвоєння його змінній Fb
    for (double i = Fa; i <= Fb; i++) /*Цикл для розрахунку проміжкових значень між Fa та Fb*/ {
        C = (i - 32) * 5/9; // Обчислення всіх значень C
        printf("F=%-15lf\t C=%lf\n", i, C); // Виведення значень Fa,Fb та проміжкових значень між ними; виведення відповідних значень C для проміжку (Fa,Fb)
    }   
} // Завдання 4
}
}
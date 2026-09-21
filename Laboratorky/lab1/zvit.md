<div align = "center">
  
### Національний технічний університет України
### «Київський політехнічний інститут імені Ігоря Сікорського»
### Факультет інформатики та обчислювальної техніки
### Кафедра обчислювальної техніки
<br></br>
<br></br>
<br></br>
### Структури даних та алгоритми
### Лабораторна робота №1
"Розгалужені алгоритми"
</div>
<br></br>
<br></br>

<div align = "right">
Виконав: студент групи ІО-63
  
Корзун Денис Олегович

Номер в групі: 10

Перевірив:
</div>
<div align = "center">
Київ — 2026
</div>

## 1) Мета:

Метою лабораторної роботи «Розгалужені алгоритми» є засвоєння теоретичного матеріалу та набуття практичних навичок використання керуючих конструкцій розгалуження та булевих (логічних) операцій.

## 2) Завдання:
### Умова:
Задано дійсне число x. Визначити значення заданої за варіантом кусково-неперервної функції y(x), якщо воно існує, або вивести на екран повідомлення про неіснування функції для заданого x.

Розв'язати задачу двома способами (написати дві програми):

1. У програмі дозволяється використовувати тільки одиничні операції порівняння (=, <>, <, <=, >, >=) і не дозволяється використовувати булеві (логічні) операції (not, and, or тощо);
2. У програмі необхідно обов'язково використати булеві (логічні) операції (not, and, or тощо); використання булевих операцій не повинно бути надлишковим.

### Формула: 

```
         f1(x) ,  x ∈ D1
y(x) =
         f2(x) ,  x ∈ D2
```

### Варіант 10: 

```
–5x³ + 10, x ∈ [8,23) | 2x³ + 8x², x ∈ (–∞, –19) ∪ (–3,0] 
```

## 3) Блок-схеми алгоритмів:

### Блок-схема до завдання 1:

<img width="1062" height="512" alt="Завдання 1" src="https://github.com/user-attachments/assets/18526a16-9723-45d7-9216-e3a8f66e8f1f" />

### Блок-схема до завдання 2:
 
<img width="942" height="471" alt="завдання2 drawio" src="https://github.com/user-attachments/assets/8a80d745-4dd5-4da8-887f-a26a0b2cf5eb" />

## 4) Код:

### Завдання 1:
```
#include <stdio.h>

int main() {
    float x = 4.0f;
    float y;
    
    if (x >= 8.0f) {
        if (x < 23.0f) {
            y = -5.0f * x * x * x + 10.0f;
            printf("%f = %f\n", x, y);
        } else {
            printf("Функція не визначена для x = %f\n", x);
        }
    } else if (x < -19.0f) {
        y = 2.0f * x * x + 8.0f * x * x;
        printf("%f = %f\n", x, y);
    } else if (x > -3.0f) {
        if (x <= 0.0f) {
            y = 2.0f * x * x *x + 8.0f * x * x;
            printf("%f = %f\n", x, y);
        } else {
            printf("Функція не визначена для x = %f\n", x);
        }
    } else {
        printf("Функція не визначена для x = %f\n", x);
    }
    return 0;
    }
```
### Завдання 2: 
```
#include <stdio.h>

int main() {
    float x = -2.0f;
    float y;
    
    if (x >= 8.0f && x < 23.0f) {
        y = -5.0f * x * x * x + 10.0f;
        printf("%f = %f\n", x, y);
    } else if (x < -19.0f || (x > -3.0f && x <= 0.0f)) {
        y = 2.0f * x * x * x + 8.0f * x * x;
        printf("%f = %f\n", x, y);
    } else {
        printf("Функція не визначена для x = %f\n", x);
    }
    return 0;
    }
```
## 5) Тестування (скріншоти):
### Завдання 1:
(Тест 1 x = -2.0f)

<img width="2670" height="1514" alt="image" src="https://github.com/user-attachments/assets/f8740276-6a7c-4505-8301-acdb631c33e4" />

(Тест 2 x = 12.0f)

<img width="2648" height="1546" alt="image" src="https://github.com/user-attachments/assets/3aaf5ef4-3a95-4133-8daf-81cf4bb4d0dc" />

(Тест 3 x = -30.0f)

<img width="2662" height="1538" alt="image" src="https://github.com/user-attachments/assets/43161526-5713-45cb-acbb-10859c702c8c" />

(Тест 4 x = -19.32)

<img width="2616" height="1474" alt="image" src="https://github.com/user-attachments/assets/ea800428-f6c7-41c3-b671-251fe9718f7c" />

(Тест 5 x = -10)

<img width="2622" height="1554" alt="image" src="https://github.com/user-attachments/assets/f2e3632b-2c99-4f0f-8b5a-156072b05746" />

Завдання 2:
(Тест 1 x = -2.0f)

<img width="2442" height="1482" alt="image" src="https://github.com/user-attachments/assets/a6c91c06-10e4-4e5e-9646-2db1b14ad175" />

(Тест 2 x = 12.0f)

<img width="2416" height="1550" alt="image" src="https://github.com/user-attachments/assets/08163613-403e-46a6-99d0-f25bbcbc78b6" />

(Тест 3 x = -30.0f)

<img width="2528" height="1528" alt="image" src="https://github.com/user-attachments/assets/6b3e99a8-828b-43b7-b229-2c2ae0edfd07" />

(Тест 4 x = -19.32)

<img width="2538" height="1566" alt="image" src="https://github.com/user-attachments/assets/0219bde5-986d-4477-9ae2-3e0a39720ccf" />

(Тест 5 x = -10)

<img width="2574" height="1554" alt="image" src="https://github.com/user-attachments/assets/ff3a8844-ca43-4e83-af0b-2d2017e237e0" />

## 6) Висновок:

Під час виконання завдань проблем не виникало. Я навчився створювати розгалужені алгоритми та створювати код як без логічних функцій, так і з ними. На додачу розібрався як користуватись Гіт хабом.

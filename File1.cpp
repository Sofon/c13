<<<<<<< HEAD
﻿#include <iostream.h>
=======
#include <iostream.h>
>>>>>>> 66e9ad60fea109c7fc850230c132180c0a6ad899
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int n,i,k;
<<<<<<< HEAD
float *a;//одномерный массив

float s,p;//перемены для нахождение промежуточного максимума
=======
float *a;

float s,p,h;
>>>>>>> 66e9ad60fea109c7fc850230c132180c0a6ad899

printf("n=? ");
scanf("%d", &n);//вводим размерность радя
if (n<1 || n>200) {printf("Invalid n! \nPress any key");getch();}

<<<<<<< HEAD
a = new float [n];//создаем массив их n элементов


printf("Input a(%d): \n", n);
for (i = 0; i < n; i++) {scanf("%f", &a[i]);}//читаем элементы массива
=======
a = new float [n];


printf("Input a(%d): \n", n);
for (i = 0; i < n; i++) {scanf("%f", &a[i]);}
>>>>>>> 66e9ad60fea109c7fc850230c132180c0a6ad899

printf("a(%d): \n", n);
for (i = 0; i < n; i++) { printf("%4.1f ", a[i]);}
printf("\n");
<<<<<<< HEAD
float h=1;
// избагаем аномалии если поставить два чесал(равных по модулю)
//например -4 и 4 в начало массива а остольные a[i]<4 то
//номер маскимально будет 0 что не верно
s=a[0]*a[0]; p=a[0]*a[0];//задаем начальное значение для проверки 0 неподходит аномалия
for (i = 1; i < n; i++) {s=a[i]*a[i]; if (s > p){ //цикл//подчет//провекра условия
p=s;//нужно для наждение максимального произведения
h=i+1;}//опредетяем номер считаем с 0
}
delete [] a;

printf("Nomer maxsimalnogo a[i]^2=");
printf("%4.0f", h);
printf("\n");
printf("Press any key") ;
getch(); // Ожидание нажатие клавиши enter для завершение выполение программы
=======

s=a[0]*a[0]; p=a[0]*a[0];
for (i = 1; i < n; i++) {s=a[i]*a[i]; if (s > p){p=s;
h=i+1;}
}
delete [] a;
printf("Max=");
printf("%4.0f", h);
printf("\n");
printf("Press any key") ;
getch(); // �������� ������� �������
>>>>>>> 66e9ad60fea109c7fc850230c132180c0a6ad899


}


#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void printArray ( int [] ); int main() {
int n,i,k;
float *a;
float *c;
float s,p,h;

printf("n=? ");
scanf("%d", &n);
if (n<1 || n>200) {printf("Invalid n! \nPress any key");getch();}

a = new float [n];


printf("Input a(%d): \n", n);
for (i = 0; i < n; i++) {scanf("%f", &a[i]);}

printf("a(%d): \n", n);
for (i = 0; i < n; i++) { printf("%4.1f ", a[i]);}
printf("\n");

s=a[0]*a[0]; p=a[0]*a[0];
for (i = 1; i < n; i++) {s=a[i]*a[i]; if (s > p){p=s;
h=i+1;}
}
delete [] a;
printf("Max=");
printf("%4.0f", h);
printf("\n");
printf("Press any key") ;
getch(); // ожидание нажатия клавиши


}

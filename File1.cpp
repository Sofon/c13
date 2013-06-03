
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void printArray ( int [] ); int main() {
int n,i,k;
float *a;
float *c;
float s,p;

printf("n=? ");
scanf("%d", &n);
if (n<1 || n>200) {printf("Invalid n! \nPress any key");getch();}

a = new float [n];
c = new float [n];

printf("Input a(%d): \n", n);
for (i = 0; i < n; i++) {scanf("%f", &a[i]);}
printf("Input c(%d): \n", n);
for (i = 0; i < n; i++) {scanf("%f", &c[i]);}
printf("a(%d): \n", n);
for (i = 0; i < n; i++) { printf("%4.1f ", a[i]);}
printf("\n");
printf("c(%d): \n", n);
for (i = 0; i < n; i++) { printf("%4.1f ", c[i]);}
printf("\n");
s=a[0]*c[0]; p=a[0]*c[0];
for (i = 1; i < n; i++) {s=a[i]*c[i]; if (s > p){p=s;}
}
delete [] a;
delete [] c;
printf("Max=");
printf("%4.1f", p);
printf("\n");
printf("Press any key") ;
getch(); // ожидание нажатия клавиши


}

#include <stdio.h>

int main() {
    int a, b, c, d;
printf("Bitte geben sie die erste Zahl ein: ");
scanf ("%d" ,&a );

printf("Bitte geben sie die zweite Zahl ein: ");
scanf ("%d" ,&b);

printf("Bitte geben sie die dritte Zahl ein: ");
scanf ("%d", &c);

printf("Bitte geben sie die vierte Zahl ein: ");
scanf ("%d", &d);

int e=(a*b);
int f=(c*d);

printf("\n %d*%d+%d*%d ist %d",a ,b ,c ,d , e + f );
printf("\n %d*%d ist %d",a ,b ,e);
printf("\n %d*%d ist %d\n",c ,d ,f);

return 0;
}

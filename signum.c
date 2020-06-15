#include <stdio.h>

int signum(int a){
    if ((a < 0))
    return -1;
    
    else if ((a == 0))
    return 0;
    
    else ((a > 0));
    return 1;
    
}
int main () {
    int a;
    printf("Bitte eine ganze Zahl eingeben: ");
    scanf("%d", &a);

    printf(" das ergebnis der eingabe ist %d\n", signum(a));

    return 0;

}



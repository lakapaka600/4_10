#include <stdio.h>

int main(void) {
    int i = 0;
    int num;
    printf("inserisci un numero: ");
    scanf("%d", &num);
    while (num<20 && num>2) {
        num = num * num;
        printf("la potenza di 2 del numero è :%d " , num);
        i++;
    }
     return 0;
}

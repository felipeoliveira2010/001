#include <stdio.h>
int main() {
    int numero = 2;
    int chute;
    printf("digite um numero: ");
    scanf("%d" , &chute);
    
    if(chute == numero){
        printf("acertou! \n");
    }else{
        printf("errou, bobão! \n");
    }
    printf("o numero era %d", numero);
    
     return 0;
}

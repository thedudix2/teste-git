#include <stdio.h>
#include <math.h>


int main(){

    // vamos calcular a hipotenusa de um triangulo
    
    float x;
    float y;
    float z;

    printf("digite o lado 1: \n");
    scanf("%f", &x);
    
    printf("digite o lado 2: \n");
    scanf("%f", &y);

    z = sqrt(pow(x,2)+pow(y,2));
    printf("hipotenous is %.1f \n", z);

    return 0;
}
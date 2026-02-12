#include<stdio.h>
int main(){
    float fahr, celsius;
    int min, max, incremento;
    
    min = 0;
    max = 300;
    incremento = 20;

    celsius =  min;
    printf("Celsius\tFahrenheit");
    printf("\n");
    while(celsius <= max){
        fahr = celsius * (5.0/9.0) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + incremento;
    }
    
    return 0;
}
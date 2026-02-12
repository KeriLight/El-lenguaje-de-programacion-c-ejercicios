#include<stdio.h>
int main(){
    float fahr, celsius;
    int min, max, incremento;
    
    min = 0;
    max = 300;
    incremento = 20;

    fahr =  min;
    printf("Fahrenheit\tCelsius");
    printf("\n");
    while(fahr <= max){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + incremento;
    }
    
    return 0;
}
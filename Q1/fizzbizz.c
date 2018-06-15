#include <stdio.h>

void fizzBuzz(int start, int end)
{
    printf("\nFizzBuzz::START: %d, %d\n", start, end);
    
    int numero;
    for ( numero = start; numero < end; numero = numero +1 ){
        if (numero % 3 == 0 && numero % 5 == 0 ){
            printf("FizzBuzz\n");
        }
        else if (numero % 3 ==0){
            printf ("Fizz\n");  
        }
        else if(numero % 5 == 0){
            printf("Buzz\n");
        }
        else if(numero % 3 != 0 && numero % 5 != 0 ){
            printf("%d\n", numero);
        }
    }
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBuzz ###\n");
    
    fizzBuzz(1, 6);
    fizzBuzz(1, 16);
    fizzBuzz(1, 100);
    
    return 0;
}

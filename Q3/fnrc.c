#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    // TODO: YOUR CODE HERE!
    int l1 = 0;
    int outros = 0;
    int sinal = 0;
    int fim = length -1;
    
    while (l1 <= fim) {
        outros = 0;
        while (outros <= fim) {
            if( sentence[outros]==sentence[l1] && outros != l1){
                sinal = 0;
                break;
            }
            sinal = 1;
            outros = outros +1;
        }
        
        if ( sinal==1){
            printf("%c", sentence [l1]);
            printf("\nfirstNonRepeatingChar::END\n");
            return sentence[l1];
        }
        l1=l1 +1;
      
    }
    printf("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    
    return -1;
    
}
int main(){
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    
    return 0;
}

/* Faca um programa que calcule o menor numero divisıvel por cada um dos numeros de 1
a 20? Ex: 2520 e o menor numero que pode ser dividido por cada um dos numeros de 1
a 10, sem sobrar resto */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1;
    
    while (num%1!=0 || num%2!=0 || num%3!=0 || num%4!=0 || num%5!=0 || num%6!=0 || num%7!=0 || num%8!=0 || num%9!=0 || num%10!=0 ||
    num%11!=0 || num%12!=0 || num%13!=0 || num%14!=0 || num%15!=0 || num%16!=0 || num%17!=0 || num%18!=0 || num%19!=0 || num%20!=0)
    {
        num = num + 1;
    }
    
    printf ("\nO menor numero que pode ser dividido por cada um dos numeros de 1 a 20 e %d", num);
        
return 0;
}
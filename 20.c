/*Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao. Devera
ser informado o numero de dados lidos e numero de valores pares. O processo termina
quando for digitado o numero 1000.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num=0;
    int soma = 0;
    
    printf ("Digite apenas numeros inteiros (1000 para terminar)\n");
    
    while (num != 1000)
    {
        if (num!=1000)
        {
         printf ("\n%d) Numero: ",cont+1);
         scanf ("%d", &num);
         if (num%2 == 0)
         {
             printf ("PAR");
             soma = soma+1;
         } else {printf ("IMPAR");}
         cont= cont+1;
        } else {break;}
    }
    
    printf ("\n\nFIM");
    printf ("\nTotal de valores: %d", cont-1); //-1 para excluir o 1000
    printf ("\nTotal de numeros pares: %d", soma-1); //-1 para excluir o 1000
    
return 0;
}
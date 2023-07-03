#include<stdio.h>
#include "operations.h"



int main()
{
    int nb1, nb2, menu;

    printf("Choisir une opération\n\t1)Addition\n\t2)Soustraction\n\t3)Multiplication\n\t4)Division\n");
    scanf("%d", &menu);

    if(menu>4)
    {
        printf("Errrrreur de saisi \n");
        return 0;
    }

    printf("Entrez le 1er nombre : \n");
    scanf("%d", &nb1);

    printf("Entrez le 2e nombre : \n");
    scanf("%d", &nb2);

    switch(menu)
    {
        case 1: printf("Le résultat est : %d \n", addition(nb1,nb2));
            break;
        case 2: printf("Le résultat est : %d \n", soustraction(nb1,nb2));
            break;
        case 3: printf("Le résultat est : %d \n", multiplication(nb1,nb2));
            break;
        case 4: if (nb2==0)
                    printf("Erreur : 0 n'est pas divisible\n");
                else
                    printf("Le résultat est : %d \n", division(nb1,nb2));
            break;
    }

    return 0;
}
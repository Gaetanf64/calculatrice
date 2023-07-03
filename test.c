#include<stdio.h>
#include "operations.h"

void testAddition()
{
    /*Meilleur facon de test
    */
    if (addition(1,2)==3)
        printf("Good, le bon résultat est %d \n", addition(1,2));
    else
        printf("Errrreur, le vrai résultat est %d \n", addition(1,2));
    /**/
    printf("Je teste addition 2 + 2 = %d \n", addition(2,2));
    printf("Je teste addition 5 + 6 = %d \n", addition(5,6));
    printf("Je teste addition 11 + 25 = %d \n", addition(11,25));
}

void testSoustraction()
{
    printf("Je teste soustraction 2 - 2 = %d \n", soustraction(2,2));
    printf("Je teste soustraction 2 - 3 = %d \n", soustraction(2,3));
    printf("Je teste soustraction 2 - 1 = %d \n", soustraction(2,1)); 
}

void testMultiplication()
{
    printf("Je teste multiplication 2 * 3 = %d \n", multiplication(2,3));
    printf("Je teste multiplication 5 * 5 = %d \n", multiplication(5,5));
    printf("Je teste multiplication 10 * 5 = %d \n", multiplication(10,5));
}

void testDivision()
{
    printf("Je teste division 2 / 2 = %d \n", division(2,2));
    printf("Je teste division 2 / 1 = %d \n", division(2,1));
    printf("Je teste division 10 / 2 = %d \n", division(10,2));  
}

int main()
{
    testAddition();
    testSoustraction();
    testMultiplication();
    testDivision();
    return 0;
}
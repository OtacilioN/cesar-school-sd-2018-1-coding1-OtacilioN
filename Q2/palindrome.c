#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome(char sentence[], int length)
{
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);
    int center, x;
    // TODO: YOUR CODE HERE!
    if (length % 2) // check if the number is not pair
    {
        center = length / 2;
        for (x = 1; x <= center; x++)
        {
            if (sentence[center - x] != sentence[center + x])
            {
                printf("false");
                printf("\nisPalindrome::END\n");
                return false;
            }
        }
        printf("true");
        printf("\nisPalindrome::END\n");
        return true;
    }
    else // So it is pair
    {
        center = length / 2;
        for (x = 0; x < center; x++)
        {
            if (sentence[center - (x + 1)] != sentence[center + x])
            {
                printf("false");
                printf("\nisPalindrome::END\n");
                return false;
            }
        }
        printf("true");
        printf("\nisPalindrome::END\n");
        return true;
    }
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");

    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}

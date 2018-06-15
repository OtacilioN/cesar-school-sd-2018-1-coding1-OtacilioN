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

#define CHARS_IN_ALPHA 26

char firstNonRepeatingChar(char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

    // TODO: YOUR CODE HERE!
    unsigned char myMap[CHARS_IN_ALPHA][2] = {0};
    int x, y, indice, firstIndice = length;

    for (x = 0; x < length; x++)
    {
        if (sentence[x] >= 'a' && sentence[x] <= 'z')
        {
            indice = sentence[x] - 'a';
            myMap[indice][0]++;
            if (!myMap[indice][1])
                myMap[indice][1] = x;
        }
    }

    for (y = 0; y < CHARS_IN_ALPHA; y++)
    {
        if (myMap[y][0] == 1 && firstIndice > myMap[y][1])
            firstIndice = myMap[y][1];
    }
    if (firstIndice < length)
    {
        printf("%c", sentence[firstIndice]);
        printf("\nfirstNonRepeatingChar::END\n");
        return sentence[firstIndice];
    }

    printf("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);

    return 0;
}

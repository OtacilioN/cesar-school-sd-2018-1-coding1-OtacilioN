#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */

#define FIZZ_NUMBER 3
#define BUZZ_NUMBER 5

char _checkFizz(int number)
{
    return !(number % FIZZ_NUMBER);
}

char _checkBuzz(int number)
{
    return !(number % BUZZ_NUMBER);
}

void fizzBizz(int start, int end)
{
    printf("\nFizzBizz::START: %d, %d\n", start, end);

    // TODO: Your code here!
    // Ex.: printf("Fizz\n");
    int x;
    char isFizz, isBuzz;
    for (x = start; x < end; x++)
    {
        isFizz = _checkFizz(x);
        isBuzz = _checkBuzz(x);
        if (!isFizz && !isBuzz)
            printf("%d", x);
        else
        {
            if (isFizz)
                printf("Fizz");
            if (isBuzz)
                printf("Buzz");
        }
        printf("\n");
    }

    printf("FizzBizz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");

    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);

    return 0;
}

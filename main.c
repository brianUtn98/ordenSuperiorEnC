#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool even(void *arg);
bool multiploDe3(void *arg);
bool menorA10(void *arg);
void* evaluar(void* numero,bool(*closure)(void*));

int main()
{
    int numeroAEvaluar = 6;

    evaluar(numeroAEvaluar,even);

    evaluar(numeroAEvaluar,multiploDe3);

    evaluar(numeroAEvaluar,menorA10);


    return 0;
}

bool even(void *arg){
    return (int)arg %2 == 0;
}

bool multiploDe3(void *arg){
    return (int)arg %3 == 0;
}

bool menorA10(void *arg){
    return (int)arg < 10;
}

void* evaluar(void* numero,bool(*closure)(void*)){
    if(closure(numero))
        printf("Se cumple la condicion :)\n");
    else
        printf("No se cumple la condicion :(\n");
}
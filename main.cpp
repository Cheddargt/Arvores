#include <iostream>
#include <stdio.h>
using namespace std;
#include "arvore.h"

int main()
{
    Arvore Teste;

    Teste.MenuPrincipal();


    getchar();
    return 0;
}

//PROBLEMA: depois de adicionar nós a ambos ramos da raiz, ao adicionar um nó ao ramo direito, o programa crasha

//PROBLEMA: pra imprimir, um node auxiliar vai descendo pela árvore e imprimindo, PORÉM ele não sobe para imprimir os próximos nodes
///solução: while coisa pra esquerda imprime, else imprime pra direita ou acaba
///ponteiro pro anterior

//PROBLEMA: não tá voltando pro vinte 10 5 3 20

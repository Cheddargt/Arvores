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

//PROBLEMA: depois de adicionar n�s a ambos ramos da raiz, ao adicionar um n� ao ramo direito, o programa crasha

//PROBLEMA: pra imprimir, um node auxiliar vai descendo pela �rvore e imprimindo, POR�M ele n�o sobe para imprimir os pr�ximos nodes
///solu��o: while coisa pra esquerda imprime, else imprime pra direita ou acaba
///ponteiro pro anterior

//PROBLEMA: n�o t� voltando pro vinte 10 5 3 20

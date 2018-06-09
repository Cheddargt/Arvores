#ifndef ARVORE_H
#define ARVORE_H
#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <vector>
using namespace std;

struct node
{
    int info;
    node *esq;
    node *dir;
    node *ant;
    int impressoes;
};

class Arvore
{
private:
    node* topo_arvore;
    int nulo;

public:
    void AdicionaArvore();
    void RemoveArvore();
    void ImprimeArvore();
    void MenuPrincipal();

    Arvore();
    ~Arvore();

};



#endif // ARVORES_H

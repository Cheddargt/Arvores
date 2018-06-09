#include "arvore.h"


int total = 0;

vector <int> todos_valores;

Arvore::Arvore()
{
    topo_arvore = NULL;
    nulo = -1;
}

Arvore:: ~Arvore()
{
}

void Arvore::AdicionaArvore()
{
    node* n = new node;
    n->esq = NULL;
    n->dir = NULL;
    n->ant = NULL;
    n->info = nulo;

    node* auxesq = new node;
    auxesq->esq = NULL;
    auxesq->dir = NULL;
    auxesq->info = nulo;

    node* auxdir = new node;
    auxdir->esq = NULL;
    auxdir->dir = NULL;
    auxdir->info = nulo;

    node* aux = new node;
    aux->esq = auxesq;
    aux->dir = auxdir;
    aux->info = nulo;
    auxesq->ant = aux;
    auxdir->ant = aux;



    int valor = 0;
    int i = 0;

    cout << "Insira valor a ser adicionado" << endl;
    cin >> valor;

    aux->info = valor;

    for (i = 0; i < todos_valores.size(); i++)
    {
        if (todos_valores[i] == valor)
        {
            printf("ERRO: No ja inserido!\n\n");
            MenuPrincipal();
        }
    }
    if (topo_arvore == NULL)
    {
        topo_arvore = new node;
        topo_arvore->info = valor;
        topo_arvore->esq = auxesq;
        topo_arvore->dir = auxdir;
        topo_arvore->ant = NULL;

        cout << "No adicionado com suceso! (1)" << endl;
        todos_valores.push_back (valor);


        for (i = 0; i < todos_valores.size(); i++)
            cout << todos_valores[i] << endl;

        MenuPrincipal();
    }

    else
    {
        n = topo_arvore;

        while (n->info != nulo)
        {
            if (valor > n->info)
            {
                if (n->dir->info == -1)
                {
                    n->dir = aux;
                    aux->ant = n;
                    n = aux;

                    cout << "No adicionado com suceso! (2)" << endl;
                    todos_valores.push_back (valor);

                    for (i = 0; i < todos_valores.size(); i++)
                        cout << todos_valores[i] << " ";
                    printf ("\n");

                    MenuPrincipal();

                }
                else
                {
                    n->dir->ant = n;
                    n = n->dir;
                }
            }

            if (valor < n->info)
            {
                if (n->esq->info == -1)
                {
                    n->esq = aux;
                    aux->ant = n;
                    n = aux;

                    cout << "No adicionado com suceso! (2)" << endl;
                    todos_valores.push_back (valor);

                    for (i = 0; i < todos_valores.size(); i++)
                        cout << todos_valores[i] << " ";
                    printf ("\n");

                    MenuPrincipal();


                }
                else
                {
                    n->dir->ant = n;
                    n = n->dir;
                }
            }
        }
    }
}




void Arvore::RemoveArvore()
{

}

void Arvore::ImprimeArvore()
{
    node* p = new node;
    p = topo_arvore;
    int i = 0;

    if (topo_arvore == NULL)
    {
        cout << "A arvore esta vazia!" << endl;
        printf("\n");
        MenuPrincipal(); //break
    }



    else
    {
        printf ("Raiz: %d FE: %d FD: %d\n", topo_arvore->info,
        topo_arvore->esq->info, topo_arvore->dir->info);

        while ((p->esq->info != nulo) || (p->dir->info != nulo))
        {
            if (p->dir->info != nulo)
            {
                p = p->dir;
                printf ("No: %d FE: %d FD: %d\n", p->info, p->esq->info, p->dir->info);
            }
            if (p->dir->info == nulo)
            {
                p = p->esq;
                printf ("No: %d FE: %d FD: %d\n", p->info, p->esq->info, p->dir->info);
            }

        }

    }


}

void Arvore::MenuPrincipal()
{
    char opc = 0;
    bool menu = true;
    while (menu)
    {
        cout << "1. Insercao em arvore binaria" << endl
             << "2. Remocao em arvore binaria" << endl
             << "3. Apresentacao da arvore" << endl
             << "0. Fechar e ir pra casa" << endl;

        cin >> opc;

        if(opc != '1' && opc != '2' && opc != '3' && opc != '0')
            cout << "ERRO: Opcao invalida." << endl << endl;

        if(opc == '1')
        {
            AdicionaArvore();
        }
        if(opc == '2')
        {
            RemoveArvore();
        }
        if(opc == '3')
        {
            ImprimeArvore();
        }
        if(opc == '0')
        {
            cout << "Tchau tchau" << endl;
            menu = false;
        }
    }



}



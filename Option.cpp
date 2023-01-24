#include "head.h"

///Prototype des fonctions utiliser :
int option (attributs , int &,const int);
void nouveau(attributs *,const int);
int ajouter(attributs *,int &);
int affichage(attributs *,const int &);
int insertion(attributs *,const int);
int modifier(attributs *, const int &);
int chercher(attributs *, const int &);
int supprimer(attributs *,int &);
int support();

int option (attributs *E, int &n_etu, const int OP)
{
    cls;
    int choix;
    switch (OP)
    {
    case 1 :
        {
            return ajouter(E,n_etu);
        }
        break;
    case 2 :
        {
            return affichage(E,n_etu);
        }
        break;
    case 3 :
        {
            return modifier(E,n_etu);
        }
        break;
    case 4 :
        {
            return supprimer(E,n_etu);
        }
        break;
    case 5 :
        {
            return chercher(E,n_etu);
        }
        break;
    case 6 :
        {
            return support();
        }
        break;
    }
    return 2;
}

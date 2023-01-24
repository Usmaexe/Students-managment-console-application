#include "head.h"

using namespace std;

//the function and procedure used in the program each one of them call another bunch of functions
int menu();
int accueil();
void nouveau(attributs *, const int );
int option(attributs *,int &,const int);



///LES COMMANDES SYSTEM SON DECLARER DANS LE FICHIER HEADER

int main()
{
    attributs *Etudiants;
    int acc,opt,n_etudiants;
    time_t now = time(0);
    char *temps = ctime(&now);

    ///AFFICHAGE D'UNE ECRAN D'ACCEUIL DONNE LE CHOIX ENTRE COMMENCER OU BIEN QUITTER
    acc = accueil();

    if(acc==1)
    {
        cls;
        cout << endl << endl ;
        for(int i = 0 ; i < 54 ; i++)cout << " ";
        cout << temps;
        cout << endl;
        for (int i = 0 ; i < 50 ; i++)cout << " ";
        cout << "Entrer le nombre des étudiants :";
        cin >> n_etudiants;


        ///l'allocation du mémoire pour le tableau qui contient l'information des étudiant avec 20 cases de plus pour l'option de l'ajout
        Etudiants = new attributs[n_etudiants+20];
        nouveau(Etudiants,n_etudiants);
    }

    while(acc==1)
    {
        ///appeler le menu et récuperer l'option choisit
        opt = menu();
        ///l'option choisit va t-étre passer a la fonction qui va éxecuter une procédure selon l'option !
        acc = option(Etudiants,n_etudiants,opt);
    }
    ///La fin du programme (saut de ligne et affichage d'un message système):
    cout << endl << endl;
    pause;
    return 0;
}

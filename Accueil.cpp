#include "head.h"

int accueil();
int Demander_choix();

int accueil()
{
    ///déclaration des variable de temps,entier,caractère spéciale :
    int choix ;
    time_t now = time(0);
    char *temps = ctime(&now);
    setlocale (LC_CTYPE,"fra");
    do
    {
        system("cls");
        for (int l = 0 ; l < 9 ; l++)
        {
            switch (l)
            {

            case 0 :
                {
                    for (int i = 0 ; i < 135 ; i++)cout << "#";
                }
                break;

            case 2 :
                {
                    cout << "#";
                    for(int i = 0 ; i < 50 ; i++)cout << " ";
                    cout << temps;
                }
                break;


            case 4 :
                {
                    cout << "#";
                    for(int i = 0 ; i < 38 ; i++)cout << " ";
                    cout << "Bienvenue a l'application de gestion des étudiants !";
                    for(int i = 0 ; i < 43 ; i++)cout << " ";
                    cout << "#";

                }
                break;

            case 6 :
                {
                    cout << "#      1 | Commencer";
                    for(int i = 0 ; i < 97 ; i++)cout << " ";
                    cout << "Quitter | 2      #";
                }
                break;

            case 8 :
                {
                    for (int i = 0 ; i < 135 ; i++)cout << "#";
                }
                break;

            default :
                {
                    cout << "#";
                    for(int i = 0 ; i < 133 ; i++)cout << " ";
                    cout << "#";
                }
            }
        }
        choix = Demander_choix();
    }while (choix!=1 && choix!=2);
    return choix;
}

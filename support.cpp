#include "head.h"

int main();

int support()
{
    setlocale(LC_CTYPE,"fra");
    time_t now = time(0);
    char *temps = ctime(&now);
    int option = 1;

    do
    {
        cls;
        for (int l = 0 ; l < 15 ; l++)
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
                    for (int i = 0 ; i < 50 ; i++)cout << " ";
                    cout<< temps;
                }
                break;

            case 4 :
                {
                    cout << "#";
                    for (int i = 0 ; i < 56 ; i++)cout << " ";
                    cout << "1 | NOUVEAU +";
                    for (int i = 0 ; i < 64; i++)cout <<  " ";
                    cout << "#";
                }
                break;

            case 6 :
                {
                    cout << "#";
                    for (int i = 0 ; i < 56 ; i++)cout << " ";
                    cout << "2 | Informations";
                    for (int i = 0 ; i < 61; i++)cout <<  " ";
                    cout << "#";
                }
                break;


            case 8 :
                {
                    cout << "#";
                    for (int i = 0 ; i < 56 ; i++)cout << " ";
                    cout << "3 | Contactez-nous";
                    for (int i = 0 ; i < 59; i++)cout <<  " ";
                    cout << "#";

                }
                break;

            case 10 :
                {
                    cout << "#";
                    for (int i = 0 ; i < 56 ; i++)cout << " ";
                    cout << "4 | Retour";
                    for (int i = 0 ; i < 67 ; i++)cout <<  " ";
                    cout << "#";
                }
                break;

            case 12 :
                {
                    cout << "#";
                    for (int i = 0 ; i < 56 ; i++)cout << " ";
                    cout << "5 | Quitter";
                    for (int i = 0 ; i < 66 ; i++)cout <<  " ";
                    cout << "#";
                }
                break;

            case 14 :
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
        if(option<1||option>4)
        {
            cout << endl;
            for (int i = 0 ; i < 56 ; i++){cout << " " ;}
            cout << "Choix invalide !";
        }
        cout << endl;
        for (int i = 0 ; i < 57 ; i++){cout << " " ;}
        cout << "Votre choix : ";
        cin >> option;
    }while (option<1 || option > 5);

    switch(option)
    {

        case 1 :
        {
            return main();
        }

        case 2 :
        {
            cls;
            cout << endl;
            for (int i = 0 ; i < 53 ; i++)cout << " ";
            cout<< temps;
            cout << endl;
            for (int i = 0 ; i < 43 ; i++)cout << " ";
            cout << "Date de création du projet : 19 Avril 2022\n";
            cout << endl;
            for (int i = 0 ; i < 46 ; i++)cout << " ";
            cout << "Code source écrit par : Anou Oussama\n";
            cout << endl;
            for (int i = 0 ; i < 55 ; i++)cout << " ";
            cout << "+1050 ligne de code\n";
            cout << endl;
            for (int i = 0 ; i < 53 ; i++)cout << " ";
            cout << "© Tous droits réservés\n";

            cout << "\n    1 | Retour";
            for (int i = 0 ; i < 107 ; i++)cout << " ";
            cout << "Quitter | 2    \n\n";
            return Demander_choix();
        }
        break;
    case 3 :
        {
            cls;
            cout << endl;
            for (int i = 0 ; i < 53 ; i++)cout << " ";
            cout<< temps;
            cout << endl;
            for (int i = 0 ; i < 49 ; i++)cout << " ";
            cout << "Email : oussama.anou21@ump.ac.ma\n";
            cout << endl;
            for (int i = 0 ; i < 55 ; i++)cout << " ";
            cout << "Site : Mobarmij.com\n";
            cout << endl;
            for (int i = 0 ; i < 53 ; i++)cout << " ";
            cout << "© Tous droits réservés\n";

            cout << "\n    1 | Retour";
            for (int i = 0 ; i < 107 ; i++)cout << " ";
            cout << "Quitter | 2    \n\n";
            return Demander_choix();
        }
        break;

    case 4 :
        {
            return 1;
        }
        break;

    case 5 :
        {
            return 2;
        }
        break;
    }

    return 2;
}

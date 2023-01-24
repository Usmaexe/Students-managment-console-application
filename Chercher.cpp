#include "head.h"

int chercher(attributs *, const int &);
void saisie(attributs &);
void affichage_att();///l'affichage des attributs
void affichage_char();///l'affichage des caractères symboliques
void saffichage(attributs &);///l'affichage du contenu de la structure étudiant
void rech_selon(attributs *,const int &,const int &);

void rech_selon(attributs *E,const int &n_etu,const int &att_rech)
{
    switch (att_rech)
    {
    case 1 :
        {
            int id,i;
            for (int k = 0 ; k < 53 ; k++)cout << " ";
            cout << "Entrer Son Id : ";
            cin >> id;
            for (i = 0 ; i < n_etu ; i++)
            {
                if(  id == ( (E+i)->id )  )
                {
                    for (int k = 0 ; k < 50 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }
            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }

        }
        break;
    case 2 :
        {
            int i;
            char *nom;
            nom = new char [20];
            for (int k = 0 ; k < 52 ; k++)cout << " ";
            cout << "Entrer Son Nom : ";
            cin >> nom;

            ///ajouter les espaces a la fin Pour que la comparaison soit exacte
            for(i = 0 ; i < 20 ; i++)
            {
                if(nom[i]=='\0')
                {
                    for(int j = i ; j < 20 ; j++){ nom[j] = ' ';}
                    nom[20] = '\0';
                    break;
                }
            }

            for (i = 0 ; i < n_etu ; i++)
            {
                if(strcmp(nom,(E+i)->nom)==0)
                {
                    for (int k = 0 ; k < 50 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }

            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }
        }
        break;
    case 3 :
        {
            char *prenom;
            int i;
            prenom = new char [20];
            for (int k = 0 ; k < 50 ; k++)cout << " ";
            cout << "Entrer Son Prenom : ";
            cin >> prenom;

            for(i = 0 ; i < 20 ; i++)
            {
                if(prenom[i]=='\0')
                {
                    for(int j = i ; j < 20 ; j++){prenom[j] = ' ';}
                    prenom[20] = '\0';
                    break;
                }
            }

            for (i = 0 ; i < n_etu ; i++)
            {
                if(strcmp(prenom,( (E+i)->prenom )) == 0)
                {
                    for (int k = 0 ; k < 51 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }
            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }
        }
        break;
    case 4 :
        {
            int i;
            char *addresse;
            addresse = new char [30];
            cin.clear();
            cin.ignore();
            for (int k = 0 ; k < 50 ; k++)cout << " ";
            cout << "Entrer Son Addresse : ";
            cin.getline(addresse,30);
            for(i = 0 ; i < 30 ; i++)
            {
                if(addresse[i]=='\0')
                {
                    for(int j = i ; j < 30 ; j++){ addresse[j] = ' ';}
                    addresse[30] = '\0';
                    break;
                }
            }

            for (i = 0 ; i < n_etu ; i++)
            {
                if(strcmp(addresse,( (E+i)->addresse )) == 0)
                {
                    for (int k = 0 ; k < 50 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }
            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }
        }
        break;
    case 5 :
        {
            int i;
            char *specialite;
            specialite = new char [30];
            cin.clear();
            cin.ignore();
            for (int k = 0 ; k < 50 ; k++)cout << " ";
            cout << "Entrer Sa spécialité: ";
            cin.getline(specialite,30);
            for(i = 0 ; i < 30 ; i++)
            {
                if(specialite[i]=='\0')
                {
                    for(int j = i ; j < 30 ; j++){ specialite[j] = ' ';}
                    specialite[30] = '\0';
                    break;
                }
            }

            for (i = 0 ; i < n_etu ; i++)
            {
                if(strcmp(specialite,( (E+i)->specialite )) == 0)
                {
                    for (int k = 0 ; k < 50 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }

            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }
        }
        break;
    case 6 :
        {
            int niveau,i;
            for (int k = 0 ; k < 50 ; k++)cout << " ";
            cout << "Entrer Son niveau : ";
            cin >> niveau;
            for (i = 0 ; i < n_etu ; i++)
            {
                if(  niveau == ( (E+i)->niveau )  )
                {
                    for (int k = 0 ; k < 50 ; k++)cout << " ";
                    cout << "L'étudiant(e) est trouvé ! \n\n";
                    affichage_char();
                    affichage_att();
                    affichage_char();
                    saffichage(E[i]);
                    affichage_char();
                    break;
                }
            }
            if(i==n_etu)
            {
                for (int k = 0 ; k < 45 ; k++)cout << " ";
                cout << "L'étudiant(e) est introuvable ! \n";
            }
        }
        break;
    }
}

int chercher(attributs *E, const int &n_etu)
{
    int att_rech,choix;
    time_t now = time(0);
    char *temps = ctime(&now);

    cout << endl;
    for(int i = 0 ; i < 50 ; i++)cout << " ";
    cout << temps;

    cout << endl;
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "Recherche selon : \n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "1 | ID \n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "2 | Nom\n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "3 | Prenom\n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "4 | Addresse\n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "5 | Specialité\n";
    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "6 | Niveau\n\n";

    for (int i = 0 ; i < 54 ; i++)cout << " ";
    cout << "Votre choix : ";
    cin >> att_rech;

    cout << endl;
    rech_selon(E,n_etu,att_rech);

    cout << endl;
    do
    {
        cout << "      1 | Retour";
        for (int i = 0 ; i < 100 ; i++) cout << " ";
        cout << " Quitter | 2     ";
        choix = Demander_choix();
    }while (choix != 1 && choix != 2);

    return choix;
}



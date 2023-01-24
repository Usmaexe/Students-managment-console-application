#include <iostream>
#include <string.h>
#include <windows.h>
#include <time.h>

#define cls system("cls");
#define pause system("pause");

using namespace std;

int Demander_choix();

struct attributs
{
    char *nom,*prenom,*addresse,*specialite;
    int id,niveau;
};

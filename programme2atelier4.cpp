#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void ShowDateAndHour(const string& A)
{
    if ( A.length() != 12 )      //la chaine doit etre de la forme JJMMAAAAHHNN
        cerr << "respectez la forme de la Chaine" << endl;
    else
    {
        cout << "Date  : " << A.substr(0,2) << "/" << A.substr(2,2) << "/" << A.substr(4,4) << endl;
        cout << "Heure : " << A.substr(8,2) << "h" << A.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string A("201220211200");   // on prend un exemple de JJMMAAAAHHNN = 201220211200 qui represente la date du 20 decembre 2021 à 12h:00
    ShowDateAndHour(A);         //appel de la fonction afin d'afficher la forme voulue de la date 
}



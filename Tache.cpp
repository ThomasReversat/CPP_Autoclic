#include "Tache.hpp"

using namespace std;

string Tache ::getNom()
{
    return tache;
}

string Tache::dupliquerTache(int n,string tache)
{
    string t;
    for(int i=0;i<n;i++)
    {
        t = tache;
        cout <<tache<<endl; // on affiche n fois a l'ecran

    }
    return t;
}

string Tache::renommerTache(string tache,string mot)
{
    tache=mot;
    return tache;
}

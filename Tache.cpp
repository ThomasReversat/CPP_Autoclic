#include "Tache.hpp"


string Tache::getNom()
{
    return nom;
}
string Tache::dupilquerTache(string t,int n)
{
    /* duplique une tache fournie en parametre n fois */
    string tache = " ";
    for(int i=0;i<n;i++)/* n tours de boucles */
    {
        tache = tache +"\n"+t+"\n";
    }

return tache;
}
void Tache::supprimertache(string t)
{
    /* supprime une tache passee en parametre */

    t.clear(); // supprime une tache t

}
string Tache::ajouterTache(string t)
{
    /* ajouter une tache t dans une autre tache  */
    string tache=" ";
  //  tache=t;
    tache.append(t);
    return t;
}

string Tache::renommerTache(string mot) {
    /*renommer une tache t */
    string tache = mot;
    return tache;


}

void Tache::historiqueTaches(vector<string> tab, string tache, int i) {
    /*insere une tache à la ieme position */

    tab[i]=tache;
}

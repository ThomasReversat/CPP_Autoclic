
#ifndef AUTOCLICKER_PROJET_TACHE_HPP
#define AUTOCLICKER_PROJET_TACHE_HPP
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <fstream>
using namespace std;

class Tache
{
private:
    string nom; // une tache est une chaine de caracteres ; un string
public:
    string getNom();
    string dupilquerTache(string t,int n);
    void supprimertache(string t);
    string ajouterTache(string t);
    string renommerTache(string mot);
    void historiqueTaches(vector <string>tab,string tache,int i); // insere une tache à la ieme position
    void renommer_tache(string const nomFichier);

};


#endif //AUTOCLICKER_PROJET_TACHE_HPP

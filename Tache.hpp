//
#ifndef CPP_AUTO_CLICK_TACHE_HPP
#define CPP_AUTO_CLICK_TACHE_HPP
#include <string>
#include <iostream>
using namespace std;

class Tache
{
private:
    string tache; // le nom de la tache

public:
    string getNom();
    string dupliquerTache(int n,string tache); // dupliquer la tache
    string renommerTache(string t,string mot); //renomme la tache



};


#endif //CPP_AUTO_CLICK_TACHE_HPP

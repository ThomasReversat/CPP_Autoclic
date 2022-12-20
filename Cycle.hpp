
#ifndef AUTOCLICKER_PROJET_CYCLE_HPP
#define AUTOCLICKER_PROJET_CYCLE_HPP

#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string>

class Cycle{
private:
    int x; // coordonnes de la souris
    int y;
public:
    void clic_ici(int x,int y);
    void enchainer_clic(int x,int y,int nb);
    void clic_duree(int x,int y,float t,int nb);
    void clic_tache_duree_simple(int x,int y,std::string tache);
    Cycle();
    int getX();
    int getY();
};
#endif //AUTOCLICKER_PROJET_CYCLE_HPP

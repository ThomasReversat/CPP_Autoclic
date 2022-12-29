
#ifndef AUTOCLICKER_PROJET_CYCLE_HPP
#define AUTOCLICKER_PROJET_CYCLE_HPP

#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <chrono>

class Cycle{
private:
    int x; // coordonnes de la souris
    int y;
public:
    void clic_ici(int x,int y); // definis le nombre de Cycle aux positions (x,y)
    void enchainer_clic(int x,int y,int nb); // definis le nombre de cycle aux positions (x,y)
    void clic_duree(int x,int y,float t,int nb);
    void clic_tache_duree_simple(int x,int y,std::string tache);
   // void mouseClick(int button,int state,int x,int y); //realise un clic gauche au coordonne x et y
    Cycle();
    int getX();
    int getY();
    template<
            class Rep, // nombre de ticks de type rep
            class Period = std::ratio<1> //periode de ticks rationelles au moment de la compilation
    > class duration;
};
#endif //AUTOCLICKER_PROJET_CYCLE_HPP

#include "Cycle.hpp"
using namespace std;

void Cycle::clic_ici(int x, int y)
{
    /* realise des clics gauche et droits aux positions x et y */

    INPUT i[2];
    memset(i, 0, sizeof(i));
    i[0].type = i[1].type = INPUT_MOUSE;
    i[0].mi.dx = (65535. / (double)GetSystemMetrics(SM_CXSCREEN)) * x;
    i[0].mi.dy = (65535. / (double)GetSystemMetrics(SM_CYSCREEN)) * y;
    i[0].mi.dwFlags = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_LEFTDOWN;
    i[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    SendInput(2, i, sizeof(INPUT));
}


void Cycle::enchainer_clic(int x, int y,int nb)
{
    /* enchainement de clics aux coordonnes x et y */

    for(int i=0;i<nb;i++) // suite de clics (de repetitions)
    {
        clic_ici(x,y); // on enchaine nb clics
    }


}

Cycle::Cycle() {
    // definition du constructeur
    this->x=x;
    this->y=y;
}




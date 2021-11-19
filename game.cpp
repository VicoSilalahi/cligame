#include "menu.h"
#include <iostream>
#include <cstdlib>

float monHP;
int fl;

//Character Load should be implemented after loadGame();
void loadChar(){
    int lvl, exp, pHP, pPHY, pMGC;

}
int lvl, exp, pHP, pPHY, pMGC;



void dungeon(){
    char act;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"You've encountered a monster (Lv. 1)!"<<std::endl<<"Attack (A) Defend (D) Give up (G) | ";
        std::cin>>act;
        switch (act){
        case 'A':
        case 'a':
            monHP--;
            break;
        }
    }
}
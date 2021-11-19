#include <iostream>
#include "menu.h"
#include "game.h"
#include <tchar.h>
#include <cstdlib>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#pragma comment(lib, "Winmm.lib")

int main(){
    int selectMenu;
    // std::string a1 = ".\\media\\bg_1.wav";
    // mciSendString(L".\\media\\bg_1.wav", NULL, 0, NULL);
    std::string a1 = ".\\media\\bg_1.wav";
    mciSendString(c_str(a1), NULL, 0, NULL);
    clear_screen();
    std::cout<<"Welcome to TextRPG"<<std::endl;
    std::cout<<"------------------"<<std::endl;
    std::cout<<std::endl<<std::endl;
    std::cout<<"1. Load Game"<<std::endl<<"2. New Game"<<std::endl<<"3. Quit"<<std::endl;

    std::cin>>selectMenu;
    switch (selectMenu){
    case 1:
        loadGame();
        break;
    
    case 2:
        newGame();
        break;
    case 3:
        return 0;
    }
    
    return 0;
}
#include "menu.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
void loadGame(){
    std::cout<<"Enter save name : ";
    std::string saveName;
    std::cin>>saveName;
    saveName = ".\\data\\" + saveName;
    std::cout<<saveName;
    std::ofstream MyFile(saveName,std::ios::in);
    
    if (MyFile.is_open()){
        std::cout << " Save Exist\n";
    }
    else {
        std::cout << " Save not found!";
    }
    MyFile.close();
}


void newGame(){
    std::cout<<"Enter save name : ";
    std::string saveName;
    std::cin>>saveName;
    saveName = ".\\data\\" + saveName;
    std::ofstream MyFile(saveName,std::ios::in);
    
    if (MyFile.is_open()){
        std::cout << " Save already existed!\n";
    }
    else {
        MyFile.open(saveName,std::fstream::out);
        std::cout<<" Save File Created!";
    }
    MyFile.close();
    
}

void clear_screen()
{
#ifdef _WIN32
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}


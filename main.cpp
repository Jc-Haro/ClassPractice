#include<iostream>
#include<ios>
#include<iomanip>
#include"./practice1.h"
#include"./practice2.h"
#include"practice3.h"
#include"./practice4.h"
#include"./practice5.h"


int main(){

    bool runApp=true;

    char option{};

    do{
        std::cout<<"Welcome to Jc practices\n";
        std::cout<<"Choose a practice:\n";
        std::cout<<"1.-Exit\n";  
        std::cout<<"2.-GuessMyNumber\n";
        std::cout<<"3.-Vector inventory\n";
        std::cout<<"4.-Score swap\n";
        std::cout<<"5.-Matrix\n";
        std::cout<<"6.-Inventory 2\n";
        std::cin>>option;

        switch (option){
        case '1': runApp = false;  
            break;
        case '2': practice1Main();  
            break;
        case '3': practice2Main();  
            break;
        case '4': practice3Main();
            break; 
        case '5': practice4Main();
            break; 
        case '6': practice5main();
            break;
        default: std::cout<<"That option is not available yet";
            break;
        }
    } while (runApp);
    return 0;
}
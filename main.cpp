#include<iostream>
#include<ios>
#include<iomanip>
#include"./practice1.h"
#include"./practice2.h"

int main(){

    bool runApp=true;

    char option{};

    do{
        std::cout<<"Welcome to Jc practices\n";
        std::cout<<"Choose a practice:\n";
        std::cout<<"1-Exit\n";  
        std::cout<<"2-GuessMyNumber\n";
        std::cout<<"3-Vector inventory\n";
        std::cin>>option;

        switch (option){
        case '1': runApp = false;  
            break;
        case '2': practice1Main();  
            break;
        case '3': practice2Main();  
            break;
        default: std::cout<<"That option is not available yet";
            break;
        }
    } while (runApp);
    return 0;
}
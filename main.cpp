#include<iostream>
#include<ios>
#include<iomanip>
#include"./practice1.h"
#include"./practice2.h"

int main(){

    char option{};

    std::cout<<"Welcome to Jc practices\n";
    std::cout<<"Choose a practice:\n";
    std::cout<<"1-GuessMyNumber\n";
    std::cout<<"2-";
    std::cin>>option;

    switch (option){
    case '1': practice1Main();  
        break;
    case '2': practice2Main();  
        break;
    default:
        break;
    }
    return 0;
}
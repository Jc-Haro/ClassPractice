#include<iostream>
#include<vector>
#include<string>


void swipeInt(int &num1, int &adnum2);
int getScore();
void printScore(int num1, int num2);
void displayInventory(const std::vector<std::string>& myInventory);

void practice3Main(){
    int score1 = getScore();
    int score2 = getScore();
    printScore(score1, score2);
    swipeInt(score1,score2);
    std::cout<<"New scores"<<std::endl;
    printScore(score1, score2);
    std::cout<<&score1<<std::endl;
    std::cout<<&score2<<std::endl;

    std::vector<std::string> inventory;
    inventory.push_back("sword");
    inventory.push_back("shield");
    displayInventory(inventory);



}

void displayInventory(const std::vector<std::string>& myInventory){
    std::cout<<"Your inventory is: "<<std::endl;

    for (std::vector<std::string>::const_iterator i = myInventory.begin(); i != myInventory.end(); i++){
        std::cout<< *i <<std::endl;
    }
    
}




void swipeInt(int &num1, int &num2){
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}
int getScore(){
    int temporalScore;
    std::cout<<"Type the score: ";
    std::cin>>temporalScore;
    return temporalScore;
}
void printScore(int num1, int num2){
    std::cout<<"Score 1 is: "<<num1<<std::endl;
    std::cout<<"Score 2 is: "<<num2<<std::endl;
}
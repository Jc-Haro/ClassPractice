#include<iostream>
#include<vector>
#include<conio.h>

void practice2Main(){

    //Ways to daclare a vector
    //std::vector<std::string> myInventory = {"long_Sword", "great_Hammer", "ice_Bomb"};
    //std::vector<std::string> inventory(10);
    //std::vector<std::string> chestInventory(10,"-Empty-");
    //std::vector<std::string> myInventoryCopy(myInventory);
    std::vector<std::string> inventory;   

    inventory.push_back("CrossBow");
    inventory.push_back("War_Hammer");
    inventory.push_back("Shield");        
    std::cout<<"You have "<<inventory.size()<<" items in your inventory:\n";
    for (int i = 0; i < inventory.size(); i++){
        std::cout<<inventory[i]<<std::endl;
    }
    
}

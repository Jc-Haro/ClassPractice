#include<iostream>
#include<vector>

void CheckInventory(std::vector<std::string> inventory);
void FillInventory(std::vector<std::string> &inventory);
void InventoryPractice();
void VectorSizeCapacity();


const int INVENTORYSIZE = 5; 


void practice2Main(){



}

void InventoryPractice(){

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
    CheckInventory(inventory);

    std::cout<<inventory[1]<<" has "<<inventory[1].size()<<" letters on it\n";
    inventory.pop_back();
    std::cout<<"One of your items has been destroyed\n";
    CheckInventory(inventory);

    inventory.clear();

    CheckInventory(inventory);
    FillInventory(inventory);
    CheckInventory(inventory);

}
void CheckInventory(std::vector<std::string> inventory){
     if(inventory.empty()){
        std::cout<<"Your inventory is empty"<<std::endl;
    }
    else{
        std::cout<<"Your inventory is:\n";
        for (int i = 0; i < inventory.size(); i++){
            std::cout<<inventory[i]<<std::endl;
            }    
    }
}
void FillInventory(std::vector<std::string> &inventory){
    
    std::cout<<"You can have up to 5 items\n";
    std::cout<<"Your currently have "<< inventory.size()<<" items\n";

    if(inventory.size()<INVENTORYSIZE){
        int maxItemsToAdd = INVENTORYSIZE - inventory.size();
        std::cout<<"You can add up to "<< maxItemsToAdd<<" items"<<std::endl;
        int numberOfItemsToAdd{};
        do{
            std::cout<<"How many items do you want to add? ";
            std::cin>> numberOfItemsToAdd;
        }while (numberOfItemsToAdd>maxItemsToAdd);

        

        for(int i = 0; i < numberOfItemsToAdd; i++){
            std::string newItem{};
            std::cout<<"Type the item to add to your inventory in slot "<< i+1<<": ";
            std::getline(std::cin, newItem);
            inventory.push_back(newItem); 
            std::cout<<std::endl;
        }
       
    }
    else{
        std::cout<<"Your inventory is full\n";
    }
}

void VectorSizeCapacity(){
        std::vector<std::string>scores(10,0);
    std::cout<<"Vector size is: " << scores.size()<<std::endl;
    std::cout<<"Vector capacity is: "<<scores.capacity();
    scores.push_back(0);
    scores.push_back(0);
    std::cout<<"Vector size is: " << scores.size()<<std::endl;
    std::cout<<"Vector capacity is: "<<scores.capacity();

}
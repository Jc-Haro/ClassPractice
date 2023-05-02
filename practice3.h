#include<iostream>
#include<vector>



void practice3(){

    std::vector<std::string>scores(10,0);
    std::cout<<"Vector size is: " << scores.size()<<std::endl;
    std::cout<<"Vector capacity is: "<<scores.capacity();
    scores.push_back(0);
    scores.push_back(0);
    std::cout<<"Vector size is: " << scores.size()<<std::endl;
    std::cout<<"Vector capacity is: "<<scores.capacity();

}
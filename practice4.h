#include<iostream>




void printBox(int rows, int columns);
void printDiagonal(int rows, int columns);
int getPositiveNumber(std::string type);

void practice4Main(){
    int ROWS = getPositiveNumber("Type the number of and columns : ");
    int COLUMNS = ROWS;

    std::cout<<"\nBox"<<std::endl;
    printBox(ROWS, COLUMNS);
    std::cout<<"\nDiagonal"<<std::endl;
    printDiagonal(ROWS, COLUMNS);


}

void printBox(int rows, int columns){

       for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i==0 || i == columns-1 || j == 0 || j == rows-1 ){
                std::cout<<" 1 ";
            }
            else{
                std::cout<<" 0 ";
            }
        }
        std::cout<<std::endl;
    }
}

void printDiagonal(int rows, int columns){

      for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i==0 || i == columns-1 || j == 0 || j == rows-1  || i==j || columns-i-1==j){
                std::cout<<" 1 ";
            }
            else{
                std::cout<<" 0 ";
            }
        }
        std::cout<<std::endl;
    }
}

int getPositiveNumber(std::string type){
    int temporalNumber{};

    do{
        std::cout<<type; 
        std::cin>>temporalNumber;
    }while(temporalNumber<0);

    return temporalNumber;
}

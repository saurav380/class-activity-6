#include<iostream>
#include<sting> //for using string

int main(){

    //Variables to store user input
    std::string street, city, state, zipcode;
    
    std::cout<<"Enter your street:";
    std::getline(std::cin, street);

    std::cout<<"Enter your city:";
    std::getline(std::cin, city);

    std::cout<<"Enter your state:";
    std::getline(std::cin, state);

    std::cout<<"Enter your ZIP code:";
    std::getline(std::cin, zipcode);

    std::cout<<"\nYour address is:\n";
    std::cout<<street<<std::endl;
    std::cout<<city<<","<<state<<","<<zipcode<<"."<<std::endl;

    return 0;
    }
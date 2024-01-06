#include <iostream>



int main(){

    int operationMode;
    double firstNumber;
    double secondNumber;

    std::cout<<"Put in the number of the operation you would like to do. Addition(1), Subtraction(2), Multiplication(3), or Division(4) ";
    std::cin>> operationMode;

    switch(operationMode){
        case 1:
            std::cout<<"What is the first number? ";
            std::cin>>firstNumber;
            std::cout<<"What is the second number? ";
            std::cin>>secondNumber;
            std::cout<<"The sum is "<< firstNumber+secondNumber;
            break;
        case 2:
            std::cout<<"What is the first number? ";
            std::cin>>firstNumber;
            std::cout<<"What is the second number? ";
            std::cin>>secondNumber;
            std::cout<<"The sum is "<<firstNumber-secondNumber;
            break;
        case 3:
            std::cout<<"What is the first number? ";
            std::cin>>firstNumber;
            std::cout<<"What is the second number? ";
            std::cin>>secondNumber;
            std::cout<<"The product is "<<firstNumber*secondNumber;
            break;
        case 4:
            std::cout<<"What is the first number? ";
            std::cin>>firstNumber;
            std::cout<<"What is the second number? ";
            std::cin>>secondNumber;
            std::cout<<"The product is "<<firstNumber/secondNumber;
            break;
        default:
            std::cout<<"Put in the number thats next to the operation that you want to do.";

    }


    return 0;
}
#include <iostream>



int main(){

    int operationMode;
    double firstNumber;
    double secondNumber;

    std::cout<<"Put in the number of the operation you would like to do. Addition(1), Subtraction(2), Multiplication(3), or Division(4)";
    std::cin>> operationMode;

    //Addition Module
    if (operationMode == 1)
    {
    std::cout<<"What is the first number?"<<'\n';
    std::cin>>firstNumber;
    std::cout<<"What is the second number?"<<'\n';
    std::cin>>secondNumber;
    std::cout<<"The sum is "<<firstNumber+secondNumber;
    }
    //Subtraction Module
    if (operationMode == 2)
    {
    std::cout<<"What is the first number?"<<'\n';
    std::cin>>firstNumber;
    std::cout<<"What is the second number?"<<'\n';
    std::cin>>secondNumber;
    std::cout<<"The sum is "<<firstNumber-secondNumber;
    }
    //Multiplcation Module
    if (operationMode == 3)
    {
    std::cout<<"What is the first number?"<<'\n';
    std::cin>>firstNumber;
    std::cout<<"What is the second number?"<<'\n';
    std::cin>>secondNumber;
    std::cout<<"The product is "<<firstNumber*secondNumber;
    }
    //Division Module
    if (operationMode == 4)
    {
    std::cout<<"What is the first number?"<<'\n';
    std::cin>>firstNumber;
    std::cout<<"What is the second number?"<<'\n';
    std::cin>>secondNumber;
    std::cout<<"The product is "<<firstNumber/secondNumber;
    }
//I just copy and pasted the addition module over until I had everything in the order I liked it

    if(operationMode <1 || operationMode >4 )
    {
        std::cout<<"You need to read the directions once more. Bye.";
    }


    return 0;
}
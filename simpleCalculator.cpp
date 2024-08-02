#include<iostream>
int main() 
{
    char ch;
    float n1, n2;
    std::cout<<"enter the operator(+, -, *, /): ";
    std::cin>>ch;
    std::cout<<"enter two numbers: ";
    std::cin>>n1>>n2;
    switch(ch)
     {
        case '+':
            std::cout<<"addition of "<<n1<<" and "<<n2<<" is "<<n1+n2;
            break;
        case '-':
            std::cout<<"subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2;
            break;
        case '*':
            std::cout<<"multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2;
            break;
        case '/':
            std::cout << "division of "<< n1 <<" by "<< n2 <<" is "<<n1/n2;
            break;
        default:
            std::cout << "error!!!! enter valid operator";
            break;
    }
    return 0;
}

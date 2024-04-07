#include<iostream>
#include<random>//for generating the random number
int main()
{
    int ip,rn;

    std::random_device rd;
    //generating the seed value and passing it to the engine
    std::mt19937 eng(rd());
    //numbers ranging from 50 to 60
    std::uniform_int_distribution<>dis(50,60);
    rn=dis(eng);
    
    //using do while to take i/p continuously
    do
    {
    std::cout<<"enter the number:";
    std::cin>>ip;
    if(ip<rn)
    std::cout<<"too small,enter again\n";
    else if(ip>rn)
    std::cout<<"too large,enter again\n";
    }while(ip!=rn);

    std::cout<<"congratulations!!! you guessed the number :)";
    return 0;
}
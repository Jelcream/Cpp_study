#include <iostream>

int main()
{
    char name[100];
    char phone_num[100];

    std::cout<<"What's your name?: ";
    std::cin>>name;
    
    std::cout<<"What's your phone number?: ";
    std::cin>>phone_num;

    std::cout<<"Your name is "<<name<<std::endl;
    std::cout<<"Your phone number is "<<phone_num<<std::endl;
    return 0;

}
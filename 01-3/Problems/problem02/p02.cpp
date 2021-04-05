#include <iostream>

int SimpleFunc(int a = 10)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}

int main()
{
    std::cout<<SimpleFunc(1)<<std::endl;
    //std::cout<<SimpleFunc()<<std::endl; //두 함수의 조건을 충족함
}
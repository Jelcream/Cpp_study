#include <iostream>

int main()
{
    int sal = 50;
    int sell;
    while(1)
    {
        std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
        std::cin>>sell;
        if(sell == -1)
        {
            std::cout<<"���α׷��� �����մϴ�."<<std::endl;
            break;
        }
        else
        {
            std::cout<<"�̹� �� �޿�: "<<(sal + sell*0.12)<<"����"<<std::endl;
        }
    }
}
#include <iostream>

int main(){
    int temp;
    int result = 0;
    for(int i = 0 ; i < 5; i++){
        std::cout<<(i+1)<<"��° ���� �Է�: ";
        std::cin>>temp;
        result+=temp;
    }
    std::cout<<"�հ�: "<<result;
    return 0;
}
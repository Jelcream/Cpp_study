#include <iostream>

int main(){
    int temp;
    int result = 0;
    for(int i = 0 ; i < 5; i++){
        std::cout<<(i+1)<<"번째 정수 입력: ";
        std::cin>>temp;
        result+=temp;
    }
    std::cout<<"합계: "<<result;
    return 0;
}
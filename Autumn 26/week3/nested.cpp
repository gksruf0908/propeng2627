#include <iostream>
int main(){
    int n;
    std::cin >> n;

    for(int c = 0; c < n; c++){
        std::cout << "*";
    }
    std::cout << std::endl;
}
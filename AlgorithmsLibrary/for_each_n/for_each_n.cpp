#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    std::vector<int>ns {1,2,3,4,5};
    for (auto n:ns) std::cout << n<<", ";
    std::cout<< '\n';
    //kanei pollaplasiasmo me to 2, apo thn arxi mexri thn triti thessi
    std::for_each_n(ns.begin(),3,[](auto &n){n*=2;});
    for (auto n:ns) std::cout << n<< " ,";
    std::cout << '\n';

}
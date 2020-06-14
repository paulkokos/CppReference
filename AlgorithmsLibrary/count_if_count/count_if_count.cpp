#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{1,2,3,4,4,3,7,8,9,10};
    int target1 = 3;
    int target2 = 5;
    int num_items1 = std::count(v.begin(),v.end(),target1);
    int num_items2 = std::count(v.begin(),v.end(),target2);
    std::cout << "Number: " << target1 << " count: " << num_items1 <<'\n';
    std::cout << "Number: " << target2 << " count: " << num_items2 <<'\n';

    int num_items3 = std::count_if(v.begin(),v.end(),[](int i){ return i%3==0;});
    std::cout << "Numbers divisible by three: " << num_items3 << '\n';
}
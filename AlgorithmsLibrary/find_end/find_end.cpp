#include <algorithm>
#include <iostream>
#include <vector>
int main () {
    std::vector<int> v{1,2,3,4,1,2,3,4,1,2,3,4};
    std::vector<int>::iterator result;
    std::vector<int> t1{1,2,3};

    result = std::find_end(v.begin(),v.end(),t1.begin(),t1.end());

    if (result == v.end()) {
        std::cout << "Sequence not found \n";
    } else {
        std::cout << "Last occurence is at: " << std::distance(v.begin(),result) << "\n";
    }

    std::vector<int> t2{4,5,6};
    result = std::find_end(v.begin(),v.end.t2.begin(),t2.end())



}
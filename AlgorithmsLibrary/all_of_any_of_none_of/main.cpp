#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

int main () {
    std::vector<int> v(10,2);
    std::partial_sum(v.cbegin(),v.cend(),v.begin());
    std::cout << "Among numbers: ";
    std::copy(v.cbegin(),v.cend(),std::ostream_iterator<int>(std::cout," "));
    std::cout << "\n";

    if (std::all_of(v.cbegin(),v.cend(),[](int i) {i%2 ==0;})) {
        std::cout << "All numbers are even\n";
    }
}
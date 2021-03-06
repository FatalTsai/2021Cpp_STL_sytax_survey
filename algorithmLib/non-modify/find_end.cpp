#include <algorithm>
#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> v{1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    std::vector<int>::iterator result;
 
    auto check = [&] {
        result == v.end()
            ? std::cout << "sequence not found\n"
            : std::cout << "last occurrence is at: "
                        << std::distance(v.begin(), result) << "\n";
    };
 
    std::vector<int> t1{1, 2, 3};
    result = std::find_end(v.begin(), v.end(), t1.begin(), t1.end());
    check();
 
    std::vector<int> t2{4, 5, 6};
    result = std::find_end(v.begin(), v.end(), t2.begin(), t2.end());
    check();
}
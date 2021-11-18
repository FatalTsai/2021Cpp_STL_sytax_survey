#include <string_view>
#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
 
template <typename Container>
bool contains(const Container& cont, const std::string& s)
{
    return std::search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}
 
int main()
{
    std::string str = "why waste time learning, when ignorance is instantaneous?";
    // str.find() can be used as well
    std::cout << std::boolalpha << contains(str, "learning") << '\n'   // true
                                << contains(str, "lemming")  << '\n';  // false
 
    std::vector<char> vec(str.begin(), str.end());
    std::cout << contains(vec, "learning") << '\n'   // true
              << contains(vec, "leaning")  << '\n';  // false
 
    // The C++17 overload demo:
    constexpr std::string_view haystack =
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed "
        "do eiusmod tempor incididunt ut labore et dolore magna aliqua";
    const std::string needle {"pisci"};
 
    if (auto it = std::search(haystack.begin(), haystack.end(),
                      std::boyer_moore_searcher(needle.begin(), needle.end()));
        it != haystack.end())
    {
        std::cout << "The string " << quoted(needle, '\'') << " found at offset "
                  << it - haystack.begin() << '\n';
    } else {
        std::cout << "The string " << std::quoted(needle) << " not found\n";
    }
}
#include <deque>
#include <iostream>

int main() {
    // Operations like, size(), empty(), at() are same as vector 
    std::deque<int> dq = {4, 5};
    dq.push_front(3);
    dq.push_back(7);
    auto first = dq.begin(), last = dq.end();
    while(first != last) {
        std::cout << *first << " ";
        first ++;
    }
    std::cout << std::endl;
    // We can also do operations like 'pop_back' and 'pop_front()'

    // We can erase the deque by giving a range as arguments
    dq.erase(dq.begin() + 1, dq.end() - 1);
    for(int i = 0; i < dq.size(); i++)
        std::cout << dq.at(i) << " ";
    std::cout << std::endl;

    return 0;
}

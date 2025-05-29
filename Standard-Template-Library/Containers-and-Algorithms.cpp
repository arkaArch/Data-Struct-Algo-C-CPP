#include <array>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;



////////////////////////////////////////////////////// CONTAINERS /////////////////////////////////////////////////////////

// ----------------------- Array ------------------------ //
void array_stl() {
    array<int, 4> arr = {6, 8, 3, 4};
    cout << "Is array empty: " << arr.empty() << endl;
    cout << "Element at index-2: " << arr.at(2) << endl;
    cout << "First and last element: " << arr.front() << " " << arr.back() << endl;
}


// ----------------------- Vector ------------------------ //
void vector_stl() {
    vector<int> v = {6, 8, 3, 4};
    // All the array operations have shown above is applicable in vectors
    
    // An iterator in C++ is a pointer-like object that points to an element of the STL container.
    vector<int>::iterator first = v.begin();
    auto last = v.end();    // Automatically assign variable type
    while(first < last) {
        cout << *first << " ";
        first ++;
    }
    cout << "\n";

    // Vector double it size when an element is pushed, and dumped the old
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(9);
    cout << "After insert one element size of v: " << v.size() << endl;
    cout << "After insert one element capacity of v: " << v.capacity() << endl;
    v.pop_back();
    cout << "After popping last element size of v: " << v.size() << endl;
    cout << "After popping last element capacity of v: " << v.capacity() << endl;
    v.clear();
    cout << "After clearing size of v: " << v.size() << endl;
    cout << "After clearing last element capacity of v: " << v.capacity() << endl;
}


// ----------------------- Stack ------------------------ //
void stack_stl() {
    stack<string> s;
    s.push("cat");
    s.push("bat");
    s.push("rat");

    // Print from the last element
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}


// ----------------------- Queue ------------------------ //
void queue_stl() {
    queue<string> q;
    q.push("cat");
    q.push("bat");
    q.push("rat");

    // Print from the first element
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    } cout << endl;
}


// ----------------------- Deque ------------------------ //
void deque_stl() {
    // Operations like, size(), empty(), at() are same as above
    deque<int> dq = {4, 5};
    dq.push_front(3);
    dq.push_back(7);
    auto first = dq.begin(), last = dq.end();
    while(first != last) {
        cout << *first << " ";
        first ++;
    }
    cout << endl;
    // We can also do operations like 'pop_back' and 'pop_front()'

    // We can erase the deque by giving a range as arguments
    dq.erase(dq.begin() + 1, dq.end() - 1);
    for(int i = 0; i < dq.size(); i++)
        cout << dq.at(i) << " ";
    cout << endl;
}


// ----------------------- Priority Queue ------------------------ //
void priority_queue_stl() {
    // Priority queue is a type of queue where elements are inserted and removed as per priority(greater by default)
    // Priority queue container provides the built-in implementation of a binary heap data structure. There can be two types of heaps,
    // Max-heap in which the priority is given to the largest element. (Default)
    // Min-heap in which the priority is given to the smallest element.
    priority_queue<int> pq_max;
    pq_max.push(3); pq_max.push(8); pq_max.push(2); pq_max.push(5); pq_max.push(9);
    while(!pq_max.empty()) {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }
    cout << endl;
    
    // The default underlying container used by priority queue is vector
    priority_queue<int, vector<int>, greater<int>> pq_min;
    // Thus we change the order
    pq_min.push(3); pq_min.push(8); pq_min.push(2); pq_min.push(5); pq_min.push(9);
    while(!pq_min.empty()) {
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
    cout << endl;   
}


// ----------------------- List ------------------------ //
// A list is implemented as a doubly linked list. So lists do not support random access.
void list_stl() {
    // Operations like, size(), empty(), push_front(), push_back(), 
    // pop_front(), pop_back(), front(), back() are same as above
    list<int> l = {4, 3, 5, 2};
    // Inserting an element at index 3
    auto it = l.begin();
    advance(it, 3);
    l.insert(it, 9);
    for (auto i : l) 
        cout << i << " ";
    cout << endl;

    // Now the list become: {4, 3, 5, 9, 2}
    // So to access 4th element:
    cout << "Fourth element in the list: " << *next(l.begin(), 3) << endl;

}


// ----------------------- Set ------------------------ //
// Sets are associative container which stores unique elements in some sorted order. 
// By default, it is sorted ascending order of the keys.
void print(set<int> s) {
    for (int i : s)
        cout << i << " ";
    cout << endl;
}
void set_stl() {
    set<int> s;
    s.insert(5); s.insert(8); s.insert(1); s.insert(4); s.insert(2);
    s.insert(5); s.insert(8); s.insert(1); s.insert(4); s.insert(2);
    s.insert(5); s.insert(8); s.insert(1); s.insert(4); s.insert(2);
    print(s); 
    
    // We can delete values from set by value and iterator
    s.erase(8);
    s.erase(s.begin());
    print(s);

    // We can check if a value is present in set or not(answer is 1 or 0)
    cout << "Is 5 is present inside the set: " << s.count(5) << endl;

    // find() method in set returns the iterator
    set<int>::iterator it = s.find(4);
    cout << "Values >= 4 present in the set: ";
    while(it != s.end()) {
        cout << *it << " ";
        it++;
    } cout << endl;
}



// ----------------------- Map ------------------------ //
// Maps are associative containers that store data in the form of key value pairs 
// sorted on the basis of keys.
void map_stl() {
    map<string, string> fighter_jets {{"Mirage", "France"}, {"Sukhoi", "Russia"}};
    fighter_jets.insert({"McDonnell", "America"});
    for(auto jet:fighter_jets)
        cout << jet.first << " made in " << jet.second << endl;
    // So it printed in the basis of keys - 1. Mc..., 2. Mi..., 3. Su...
    fighter_jets.erase("McDonnell");
    fighter_jets["Saab-JAS-39-Gripen"] = "Sweden";

    cout << "\n------->>>>>****<<<<<-------\n" << endl;
    for(auto jet:fighter_jets)
        cout << jet.first << " made in " << jet.second << endl;
}


void container_example() {
    // array_stl();
    // vector_stl();
    // stack_stl();
    // queue_stl();
    // deque_stl();
    // priority_queue_stl();
    // list_stl();
    // set_stl();
    // map_stl();
}



////////////////////////////////////////////////////// ALGORITHM /////////////////////////////////////////////////////////

string present_or_not(vector<int> &v, int k) {
    if(binary_search(v.begin(), v.end(), k))
        return "Present";
    return "Not present";
}

void algo_example() {
    vector<int> v = {45, 23, 52, 34};
    // To apply binary search we have to sort the vector
    sort(v.begin(), v.end());
    cout << present_or_not(v, 45) << endl;
    cout << present_or_not(v, 50) << endl;

    reverse(v.begin(), v.end());
    for(int i: v)
        cout << i << " ";
    cout << endl;
}

int main() {
    // cout << "----------- CONTAINER EXAMPLE ------------\n";
    container_example();
    cout << "----------- ALGO EXAMPLE ------------\n";
    algo_example();
    return 0;
}

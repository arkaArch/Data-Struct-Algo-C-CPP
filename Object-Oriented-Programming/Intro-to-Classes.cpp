#include <iostream>
#include <string>

// We can create a seperate file where class members are declared
// Like Student.hpp
class Student{
    public:
        // Constructor: Called when an object is created
        Student();
        // Destructor: Called when an object is destroyed
        ~Student();
    private:
        // By default class members are private
        // They are hidden 'fields' or 'attributes'
        std::string name;
};

// We can create a seperate file where class members are defined
// Like Student.cpp. To access class members outside of its scope
// We must prefix them with 'Class_Name::'
Student::Student(){
    std::cout << "Constructor" << std::endl;
}

Student::~Student(){
    std::cout << "Destructor" << std::endl;
}


// Main program: Can be seperated in different file like 'main.cpp'
// For more detail see: Extra-Chapters/Interface-vs-Implementation.md
int main() {
    // Creating an instance of a 'Student'(i.e an object)
    std::cout << "Constructor must be called after this line" << std::endl;
    {
        Student john;
        // john.name = "John Dahl";
        // We can't access private member of a class by an object. 
    }
    std::cout << "Destructor must be called before this line" << std::endl;

    std::cout << std::endl;

    // If we create a pointer of an object the constructor by default called
    // But destructor is not called until we 'freed' the memory.
    std::cout << "Constructor must be called after this line" << std::endl;
    Student* sue = new Student;
    std::cout << "Destructor must be called after this line" << std::endl;
    delete sue;
    
    return 0;
}

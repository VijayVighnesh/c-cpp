#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    // ========== 1. BASIC I/O ==========
    // cout << "Hello World" << endl;
    // int age;
    // cout << "Enter age: ";
    // cin >> age;
    // cout << "You are " << age << " years old" << endl;


    // ========== 2. VARIABLES & DATA TYPES ==========
    // int x = 10;
    // double y = 3.14;
    // char c = 'A';
    // bool flag = true;
    // string name = "John";  // C++ string (not char*)
    // cout << x << " " << y << " " << c << " " << flag << " " << name << endl;


    // ========== 3. AUTO KEYWORD ==========
    // auto num = 42;        // compiler deduces int
    // auto pi = 3.14;       // compiler deduces double
    // auto text = "Hello";  // compiler deduces const char*
    // cout << num << " " << pi << " " << text << endl;


    // ========== 4. REFERENCES ==========
    // int a = 10;
    // int& ref = a;  // ref is an alias for a
    // cout << "a = " << a << ", ref = " << ref << endl;
    // ref = 20;  // changes a as well
    // cout << "a = " << a << ", ref = " << ref << endl;


    // ========== 5. POINTERS (same as C) ==========
    // int num = 42;
    // int* ptr = &num;
    // cout << "Value: " << num << endl;
    // cout << "Address: " << &num << endl;
    // cout << "Pointer: " << ptr << endl;
    // cout << "Dereferenced: " << *ptr << endl;


    // ========== 6. NULLPTR (C++11) ==========
    // int* ptr = nullptr;  // better than NULL
    // if(ptr == nullptr) {
    //     cout << "Pointer is null" << endl;
    // }


    // ========== 7. ARRAYS ==========
    // int arr[5] = {1, 2, 3, 4, 5};
    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // ========== 8. VECTORS (dynamic arrays) ==========
    // vector<int> vec = {10, 20, 30};
    // vec.push_back(40);  // add element
    // vec.push_back(50);
    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;


    // ========== 9. RANGE-BASED FOR LOOP ==========
    // vector<int> nums = {1, 2, 3, 4, 5};
    // for(int n : nums) {  // cleaner than traditional for
    //     cout << n << " ";
    // }
    // cout << endl;


    // ========== 10. FUNCTIONS ==========
    // auto add = [](int a, int b) { return a + b; };  // lambda
    // cout << "5 + 3 = " << add(5, 3) << endl;


    // ========== 11. FUNCTION OVERLOADING ==========
    // (define these outside main)
    // int add(int a, int b) { return a + b; }
    // double add(double a, double b) { return a + b; }
    // string add(string a, string b) { return a + b; }


    // ========== 12. CLASSES & OBJECTS ==========
    // class Person {
    // public:
    //     string name;
    //     int age;
    //     
    //     void introduce() {
    //         cout << "Hi, I'm " << name << ", " << age << " years old" << endl;
    //     }
    // };
    // 
    // Person p;
    // p.name = "Alice";
    // p.age = 25;
    // p.introduce();


    // ========== 13. CONSTRUCTOR ==========
    // class Car {
    // public:
    //     string brand;
    //     int year;
    //     
    //     Car(string b, int y) {  // constructor
    //         brand = b;
    //         year = y;
    //     }
    //     
    //     void display() {
    //         cout << brand << " (" << year << ")" << endl;
    //     }
    // };
    // 
    // Car c("Toyota", 2020);
    // c.display();


    // ========== 14. ACCESS MODIFIERS ==========
    // class BankAccount {
    // private:
    //     double balance;  // can't access directly
    // public:
    //     BankAccount(double b) { balance = b; }
    //     
    //     void deposit(double amount) { balance += amount; }
    //     double getBalance() { return balance; }
    // };
    // 
    // BankAccount acc(1000);
    // acc.deposit(500);
    // cout << "Balance: " << acc.getBalance() << endl;


    // ========== 15. INHERITANCE ==========
    // class Animal {
    // public:
    //     void eat() { cout << "Eating..." << endl; }
    // };
    // 
    // class Dog : public Animal {  // Dog inherits from Animal
    // public:
    //     void bark() { cout << "Woof!" << endl; }
    // };
    // 
    // Dog d;
    // d.eat();   // inherited method
    // d.bark();  // own method


    // ========== 16. POLYMORPHISM (virtual functions) ==========
    // class Shape {
    // public:
    //     virtual void draw() {  // virtual allows override
    //         cout << "Drawing shape" << endl;
    //     }
    // };
    // 
    // class Circle : public Shape {
    // public:
    //     void draw() override {
    //         cout << "Drawing circle" << endl;
    //     }
    // };
    // 
    // Shape* s = new Circle();
    // s->draw();  // calls Circle's draw()
    // delete s;


    // ========== 17. NEW & DELETE (dynamic memory) ==========
    // int* ptr = new int(42);  // allocate on heap
    // cout << *ptr << endl;
    // delete ptr;  // free memory
    // 
    // int* arr = new int[5];  // dynamic array
    // for(int i = 0; i < 5; i++) arr[i] = i * 10;
    // delete[] arr;  // free array


    // ========== 18. SMART POINTERS (C++11) ==========
    // #include <memory>
    // unique_ptr<int> ptr1(new int(10));  // auto-deletes
    // cout << *ptr1 << endl;
    // // no need to delete, automatic cleanup


    // ========== 19. TEMPLATES ==========
    // template<typename T>
    // T maximum(T a, T b) {
    //     return (a > b) ? a : b;
    // }
    // 
    // cout << maximum(5, 10) << endl;        // int
    // cout << maximum(3.14, 2.71) << endl;   // double


    // ========== 20. EXCEPTION HANDLING ==========
    // try {
    //     int x = 10, y = 0;
    //     if(y == 0) throw "Division by zero!";
    //     cout << x / y << endl;
    // } catch(const char* msg) {
    //     cout << "Error: " << msg << endl;
    // }


    // ========== 21. STL CONTAINERS ==========
    // #include <map>
    // #include <set>
    // 
    // map<string, int> ages;
    // ages["Alice"] = 25;
    // ages["Bob"] = 30;
    // cout << ages["Alice"] << endl;
    // 
    // set<int> unique_nums = {1, 2, 2, 3, 3, 4};  // auto removes duplicates
    // for(int n : unique_nums) cout << n << " ";  // prints: 1 2 3 4


    // ========== 22. NAMESPACES ==========
    // namespace Math {
    //     int add(int a, int b) { return a + b; }
    // }
    // 
    // cout << Math::add(5, 3) << endl;


    return 0;
}

/*
KEY C++ CONCEPTS:

REFERENCES vs POINTERS:
- Reference: alias to existing variable (int& ref = a)
- Pointer: stores memory address (int* ptr = &a)
- References can't be null, pointers can
- References can't be reassigned

CLASSES & OOP:
- Encapsulation: private/public members
- Inheritance: class Child : public Parent
- Polymorphism: virtual functions + override
- Constructor: special function to initialize objects

MEMORY MANAGEMENT:
- Stack: automatic (local variables)
- Heap: manual with new/delete
- Smart pointers: automatic cleanup (unique_ptr, shared_ptr)

STL (Standard Template Library):
- vector: dynamic array
- string: text handling
- map: key-value pairs
- set: unique elements
- Algorithms: sort, find, etc.

C++ vs C:
- cout/cin instead of printf/scanf
- string instead of char*
- vector instead of arrays
- classes instead of structs
- references (no equivalent in C)
- function overloading
- templates for generic programming
*/

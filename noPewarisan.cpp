#include <iostream>
using namespace std;

class baseClass {
public:
    void perkenalan() {
        cout << "hallo saya function dari base class";
    }
};

class baseClass1 {
public:
   virtual void perkenalan() {
        cout << "hallo saya function dari base class ";
    }
};

class derivedClass : public baseClass1 {
public:
    void perkenalan1() {
        cout << "hallo sya function dari derived class";

    }
};

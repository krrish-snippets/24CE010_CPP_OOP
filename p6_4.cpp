#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout<<"Base constructor called"<<endl;
    }
    virtual ~Base() {
        cout<<"Base destructor called"<<endl;
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[5];
        cout<<"Derived constructor called"<<endl;
    }
    ~Derived() {
        delete[] data;
        cout<<"Derived destructor called"<<endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;
    cout << "Krrish Bhardwaj - 24CE010" << endl;
    return 0;
}

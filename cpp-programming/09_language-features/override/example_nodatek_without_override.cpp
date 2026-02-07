#include <iostream>

class A {
    public: 
    virtual char getValue() const {
        return 'a';
    }
    virtual ~A() {}
};

class B: public A {
    public:
        virtual char getValue() {
            return 'b';
        }
};

int main(){

    A* a = new B();
    std::cout << a->getValue() << std::endl;
    delete a;
    return 0;
}
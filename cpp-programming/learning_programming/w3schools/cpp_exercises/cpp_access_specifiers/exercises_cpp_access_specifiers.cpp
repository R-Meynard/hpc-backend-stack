#include <iostream>

// Question 3 : Use an access speicifier to make members pf MyClass accessible from outside the class.
// Answer :
class MyClass {
    public: 
        int myNum;
};

// Question 4 : Consider the following code. Which line will cause an error ?
class MyClass1 {
    public:
        int x;
    private: 
        int y;
};

// Question 9 : Use access specifiers to set the x variable to public and y to private:
// Answer :
class  MyClass2
{
private:
    int y;
public:
     int x;
};

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct term.
    // In C++, access specifiers define how class members can be accessed.

    // Question 2 : Which of the following is a public access specifier in C++ ?
    // Answer :
    // public

    // Answer to question 4
    MyClass1 myObj1;
    myObj1.x = 25;
    //myObj1.y = 50; // It doesn t work, because y is a private member 

    // Question 5 : What does the 'private' access specifier do ?
    // Answer : 
    // Restricts members so they cannot be accessed from outside the class

    // Question 6 : True or False
    // Answer : if no access specifier is provided, all members of a class are private by default.
    // Answer :
    // True

    // Question 7 : What will happen if you try to access a private member from outside the class ?
    // Answer :
    // It will cause an error.

    // Question 8 : Which access specifier allows members to be accessible in inherited classes
    // but not from outside the class ?
    // Answer :
    // protected

    // Question 9 : Use access specifiers to set the x variable to public and y to private:
    // Answer :

    return 0;
}
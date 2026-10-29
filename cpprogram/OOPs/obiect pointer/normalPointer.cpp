// Normal Pointer :

//            int =  X and Y ;

 

#include <iostream>
using namespace std;

int main() {

    int x = 4;
    int y = 6;

    cout << x << " " << y << endl;  // Values of x and y

    int* ptr = &x;  // Stores address of x
    int* p = &y;    // Stores address of y

    cout << ptr << " " << p << endl;    // Addresses of x and y
    cout << *ptr << " " << *p << endl;  // Values at those addresses

    return 0;
}
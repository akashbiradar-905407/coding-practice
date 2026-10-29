// find the largest element in the array :

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    int arr[n]; // Works with some compilers; vector<int> is standard C++.

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int* ptr = arr;
    cout<<"value of *ptr : "<<*ptr<<endl;
    int largest = *ptr;
    
    for (int i = 1; i < n; ++i) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout <<"largest is : "<< largest <<endl;
    return 0;
}
// linearsearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
    while (true) {
        cout << " Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}


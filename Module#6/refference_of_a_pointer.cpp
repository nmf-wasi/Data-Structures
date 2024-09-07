#include <bits/stdc++.h>
using namespace std;

void fun_one(int *p)
{
    cout << "memory address from fun_one = " << &p << endl;
    *p = 20;
}

void fun_two(int *p)
{
    cout << "memory address from fun_two = " << &p << endl;
    p = NULL;
    // didn't dereference, so it won't matter
    // we actually made the value of 'p' NULL, not the value of pointer
}

void fun_three(int *&p)
{
    cout << "memory address from fun_three = " << &p << endl;
    p = NULL;
}

int main()
{
    int val = 10;
    int *pointer = &val;

    fun_one(pointer);
    cout << val << endl;      // Output should be 20
    cout << *pointer << endl; // Output should be 20
    cout << "memory address after fun_one = " << &pointer << endl;

    fun_two(pointer);
    // We passed a pointer and the function made another pointer to receive that.
    // So, when the value is changed in the function, it didn't change here.
    cout << *pointer << endl; // Output should be 20 (unchanged)
    cout << "memory address after fun_two = " << &pointer << endl;

    fun_three(pointer);
    // It is receiving the address of the pointer, so it won't create another pointer
    // and will just access the previous pointer from the main function
    if (pointer)
    {
        cout << *pointer << endl; // This should not be executed because pointer is NULL
    }
    else
    {
        cout << "Pointer is NULL" << endl; // This will be printed
    }
    cout << "memory address from fun_three = " << &pointer << endl;
    cout << "It is NULL because the address is NULL" << endl;

    return 0;
}

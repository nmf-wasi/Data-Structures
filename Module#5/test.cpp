#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Lia; // Construct a vector with 0 elements.
    int input;
    cin >> input;
    vector<int> Lia(input); // Construct a vector with N elements and the value will be garbage.
    vector<int> Lia(input, 1); // Construct a vector with N elements and the value will be V.
    vector<int> Yuna(Lia);     // Construct a vector by copying another vector v2.
    int array[input];
    vector<int> v(array, array + input); // Construct a vector by copying all elements from an array A of size N.
    Lia.size(); // Returns the size of the vector.
    Lia.max_size(); // Returns the maximum size that the vector can hold.
    Lia.capacity(); // Returns the current available capacity of the vector
    Lia.clear(); // Clears the vector elements.Do not delete the memory, only clear the value.
    Lia.empty(); // Return true / false if the vector is empty or not 
    Lia.resize(20); // Change the size of the vector.
    Lia = Yuna;
    Lia.assign(7, 100); //	Assign another vector.
    Lia.push_back(8); // Add an element to the end.
    Lia.pop_back();  // Remove the last element.
    Lia.insert(2,65);    // Insert elements at a specific position.
    Lia.erase(2); // Delete elements from a specific position.
    replace(Lia.begin(), Lia.end(), value, replace_value); // Replace all the value with replace_value.Not under a vector.
    find(Lia.begin(), Lia.end(), V) // Find the value V.Not under a vector.
    Lia[i]=12; // Access the ith element.
    Lia.at(i); // Access the ith element.
    Lia.back(); // Access the last element.
    Lia.front(); // Access the first element.
    Lia.begin();	// Pointer to the first element.
    Lia.end(); // Pointer to the last element.

}










#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int queries;
    cin >> queries;
    queue<string> Yuna;
    for (int q = 0; q < queries; ++q)
    {
        int input;
        cin >> input;
        if (input == 0)
        {
            string name;
            cin >> name;
            Yuna.push(name);
        }
        else if (input == 1)
        {
            if (!Yuna.empty()) 
            {
                cout << Yuna.front() << endl;
                Yuna.pop();
            } else 
            {
                cout << "Invalid" << endl;
            }
        }
    }
    
    return 0;
}

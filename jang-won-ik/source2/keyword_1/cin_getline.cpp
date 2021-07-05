#include <iostream>
using namespace std;

int main() {
    char name[10];

    cin.getline(name, 10); // cin.getline(name, 10, '\n'); 과 동일

    cout << "name: " << name << endl;
    return 0;
}
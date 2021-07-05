#include <iostream>
using namespace std;


namespace commerce {
    int id;
}

namespace order {
    int id;
}

int main() {

    commerce::id = 1004;
    order::id = 227;

    cout << "commerce 의 id : " << commerce::id << endl;
    cout << "order 의 id : " << order::id << endl;

    return 0;
}
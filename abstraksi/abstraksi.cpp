#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:
    void setXY(string a, string b) {
        x = a;
        x = b;
}
    void display() {
        cout << "x =" << x << endl;
        cout << "y =" << y << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


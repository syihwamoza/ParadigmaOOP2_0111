#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


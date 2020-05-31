#include <iostream>
#include <string>
using namespace std;

int main() {
    string str("some string");
    for (char c : str) {
        cout << c << endl;
    }
    int a = 1,b = 2,d = 3;
    int &s = a;
    s = b;
    s = d;
    cout << a << endl;
    for(char & c : str) {
        c = toupper(c);
    }
    cout << str << endl;
    string ss;
    cout << ss[0] << endl;
    system("pause");

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    long double PI = 3.1415926535;
    int a{PI}, b = {PI};
    int c(PI), d = PI;
    cout << a << " " << b << " " << c << " " << d << endl;
    system("pause");
    return 0;
}
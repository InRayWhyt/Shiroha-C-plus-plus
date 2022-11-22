#include <iostream>

using namespace std;

int main()
{
    //整数类型字符
    char a = 'S';

    //布尔类型
    bool b = true;
    bool c = false;    

    //常量
    const int i = 100;

    //浮点类型
    //E表示法，可以是小写的e，可以是任意的，可以是正数，可以是负数。
    float d = 0.1e9; // 0.1×10的9次方
    double e = 0.1e-9; // 0.1×10的-9次方
    long double f = 0.1;

    //FLT_MAX

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << i << endl;

    cout.put('S') << endl;
}
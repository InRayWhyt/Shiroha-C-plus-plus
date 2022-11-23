#include <iostream>

using namespace std;

int main()
{
    //float a = 1; //默认int类型。
    //int b = 1.1; //默认double类型。
    ////int c = 1e100; //超出范围，要避免。

    //float d = 1 + 1.1;

    ////强制类型转换。
    //float e = 1.1;
    ////旧 C++
    //int f = (int)1.1;
    ////新 C++
    //int g = int(1.1);
    //float h = float(1.1);

    //cout << a << endl;
    //cout << b << endl;
    ////cout << c << endl;
    //cout << d << endl;
    //cout << e << endl;
    //cout << f << endl;
    //cout << g << endl;
    //cout << h << endl;

    //auto关键字
    auto a = 'a';
    auto b = 1;

    cout << a << endl;
    cout << b << endl;
}
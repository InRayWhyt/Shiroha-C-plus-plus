#include <iostream>

using namespace std;

int main()
{
	//int age;

	//cin >> age;

	//int months = age * 12;

	//cout << "你存在了" << months << "个月" << endl;

	//cout << "米" << endl;

	//float m;
	//
	//cin >> m;

	//float cm = m * 100;

	//cout << cm << "厘米" << endl;

	cout << "秒" << endl;

	int s;

	cin >> s;	
	
	int day    = s / 86400;
	int h      = (s - day * 86400) / 3600;
	int min    = (s % 3600) / 60;
	int s_Left = s % 60;

	cout << day << "天" << h << "小时" << min << "分" << s_Left << "秒" << endl;
}
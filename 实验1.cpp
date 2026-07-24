#include <iostream>
#include<cmath>
using namespace std;
float task1(float a, float b);
double task2();
int  task3(int c);
int main()
{
	float r, h;
	cout << "现在求圆柱体表面积vs，请依次输入圆柱体半径r和圆柱体高h：" << endl;
	cin >> r >> h;
	cout << "该圆柱体表面积vs为：" << task1(r, h) << endl;

	cout << "任务2所得y的值为：" << task2() << endl;

	int day;
	cout << "请输入任意一个1~7之间的整数：" << endl;
	cin >> day;
	task3(day);
	return 0;
}
float task1(float a, float b)
{
	float d;
	d = 2 * 3.14 * a * a + 2 * 3.14 * a * b;
	return d;
}
double task2()
{
	double y=0.0;
	for (int i = 1;i <= 100;i++)
	{
		if (i % 2 == 1)
		{
			y += 1.0 / i;
		}
		else
		{
			y -= 1.0 / i;
		}
	}
	return round(y * 100) / 100;

}
int task3(int c)
{
	switch (c)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "输入的整数不在1~7范围内！" << endl;
		break;

	}
	return 0;
}
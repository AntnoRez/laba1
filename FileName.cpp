#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
#include <list>
#include <sstream>
#include <cstring>
using namespace std;

double fraction(double x)
{
	int a;
	a = (int)x;
	x = x - a;
	return x;
}

int charToNum(char x)
{
	int c = static_cast<int>(x);
	x = c - 48;
	return x;
}

bool is2Digits(int x)
{
	int a = log10(abs(x)) + 1;
	if (a == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isInRange(int a, int b, int num)
{
	if (a < b)
	{
		int c = a;
		a = b;
		b = c;
	}
	if ((num <= a)&(num >= b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEqual(int a, int b, int c)
{
	if ((a == b) & (b == c))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int abs1(int x)
{
	return abs(x);
}

bool is35(int x)
{
	if (((x % 5 == 0) & (x % 3 != 0)) | ((x % 5 != 0) & (x % 3 == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int max3(int x, int y, int z)
{
	int m;
	if (x > y)
	{
		m = x;
	}
	else
	{ 
		m = y;
	}
	if (z > m)
	{
		m = z;
	}
	return m;
}

int sum2(int x, int y)
{
	int c = x + y;
	if ((c >= 10) & (c <= 19))
	{
		c = 20;
	}
	return c;
}

string day(int x)
{
	switch (x)
	{
		case 1:
			return "�����������";
			break;
		case 2:
			return "�������";
			break;
		case 3:
			return "�����";
			break;
		case 4:
			return "�������";
			break;
		case 5:
			return "�������";
			break;
		case 6:
			return "�������";
			break;
		case 7:
			return "�����������";
			break;
		default:
			return "���� ������ ������ 7";
			break;
	}
}

string listNums(int x)
{
	ostringstream a;
	for (int i = 0; i < x + 1; i++)
	{
		a << i << ' ';
	}
	return a.str();
}

string chet(int x)
{
	ostringstream a;
	for (int i = 0; i < x + 1; i = i + 2)
	{
		a << i << ' ';
	}
	return a.str();
}

int numLen(long x)
{
	int i = 1;
	while (abs(x) >= 10)
	{
		x = x / 10;
		i = i + 1;
	}
	return i;
}

void square(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void rightTriangle(int x)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 0; j < x - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int findFirst(int arr[], int size, int x)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int maxAbs(int arr[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) > max)
		{
			max = abs(arr[i]);
		}
	}
	return max;
}

int * add(int arr[], int ins[], int pos, int arrSize, int insSize)
{
	int* newArray = new int[arrSize + insSize];
	for (int i = 0; i < pos; ++i) 
	{
		newArray[i] = arr[i];
	}

	// ��������� �������� �� ins
	for (int i = 0; i < insSize; ++i)
	{
		newArray[pos + i] = ins[i];
	}

	// �������� ���������� �������� �� arr
	for (int i = pos; i < arrSize; ++i)
	{
		newArray[insSize + i] = arr[i];
	}
	return newArray;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "������ �������:\n1 2 3 4 5 6 7 8 9 10 \n11 12 13 14 15 16 17 18 19 20 \n�������� ����� �������:";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		double x;
		cout << "������� x:";
		cin >> x;
		cout << "�����:" << fraction(x);
		break;
	}
	case 2:
	{
		char x;
		cout << "������� ����� �� 0 �� 9:";
		cin >> x;
		cout << "�����:" << charToNum(x);
	}
	break;
	case 3:
	{
		int x;
		cout << "������� �����:";
		cin >> x;
		int y = is2Digits(x);
		if (y == 0)
		{
			cout << "�����: False";
		}
		else
		{
			cout << "�����: True";
		}
		break;
	}
	case 4:
	{
		int a, b, num;
		cout << "������� ������� (��� �����) � ����� ������� ����� ��������� ����� ������:";
		cin >> a >> b >> num;
		int y = isInRange(a, b, num);
		if (y == 0)
		{
			cout << "�����: False";
		}
		else
		{
			cout << "�����: True";
		}
		break;
	}
	case 5:
	{
		int a, b, c;
		cout << "������� a, b, c ����� ������:";
		cin >> a >> b >> c;
		int y = isEqual(a, b, c);
		if (y == 0)
		{
			cout << "�����: False";
		}
		else
		{
			cout << "�����: True";
		}
		break;
	}
	case 6:
	{
		int x;
		cout << "������� x:";
		cin >> x;
		cout << "�����:" << abs1(x);
		break;
	}
	case 7:
	{
		int x;
		cout << "������� x:";
		cin >> x;
		int y = is35(x);
		if (y == 0)
		{
			cout << "�����: False";
		}
		else
		{
			cout << "�����: True";
		}
		break;
	}
	case 8:
	{
		int x, y, z;
		cout << "�������� x, y, z ����� ������:";
		cin >> x >> y >> z;
		cout << "�����:" << max3(x, y, z);
		break;
	}
	case 9:
	{
		int x, y;
		cout << "�������� x, y ����� ������:";
		cin >> x >> y;
		cout << "�����:" << sum2(x, y);
		break;
	}
	case 10:
	{
		int x;
		cout << "������� x (�� 1 �� 7):";
		cin >> x;
		cout << "�����:" << day(x);
		break;
	}
	case 11:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		cout << "�����:" << listNums(x);
		break;
	}
	case 12:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		cout << "�����:" << chet(x);
		break;
	}
	case 13:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		cout << "�����:" << numLen(x);
		break;
	}
	case 14:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		square(x);
		break;
	}
	case 15:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		rightTriangle(x);
		break;
	}
	case 16:
	{
		int arr[] = {1, 2, 3, 3, 2 ,1, 4};
		int x;
		cout << "�������� x:";
		cin >> x;
		int size = sizeof(arr) / sizeof(arr[0]);
		cout << "�����:" << findFirst(arr, size, x);
		break;
	}
	case 17:
	{
		int arr[] = { 1, -2, -7, 4, 2, 2, 5 };
		int size = sizeof(arr) / sizeof(arr[0]);
		cout << "�����:" << maxAbs(arr, size);
		break;
	}
	case 18:
	{
		int arr[] = { 1, 2, 3, 4, 5 };
		int ins[] = { 7, 8, 9 };
		int pos;
		int arrSize = sizeof(arr) / sizeof(arr[0]);
		int insSize = sizeof(ins) / sizeof(ins[0]);
		cout << "������� ����� �������:";
		cin >> pos;
		if ((pos >= 0)&(pos <= arrSize))
		{
			cout << "�����:" << * add(arr, ins, pos, arrSize, insSize);
			break;
		}
		else
		{
			cout << "������������ �������!";
			break;
		}
	}
	case 19:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		cout << "�����:" << numLen(x);
		break;
	}
	case 20:
	{
		int x;
		cout << "�������� x:";
		cin >> x;
		cout << "�����:" << numLen(x);
		break;
	}
	default:
	{
		cout << "������ ������� �� ����������!";
		break;
	}
	}
}
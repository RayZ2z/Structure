#include<iostream>
#include "Ex3.h"
#include "Ex3.cpp"
using namespace std;
int main()
{
	cout << "����һ�����飬���ڰ�������뵽�������С�" << endl;
	int n;
	cout << "��������ĳ��ȣ�" << endl;
	cin >> n;
	int *p = new int[n];
	for (int i = 1; i <= n; i++)
	{
		cout << "�����" << i << "��Ԫ��" << endl;
		cin >> p[i-1];
	}
	LinkList<int> wxr(p, n);
	cout << "����������" << endl;
	wxr.Display();
	cout << "����Ҫ����Ԫ�ص�λ��i��" << endl;
	int ist;
	cin >> ist;
	cout << "����Ҫ�����Ԫ��e��" << endl;
	int e;
	cin >> e;
	wxr.Insert(ist, e);
	cout << "�����ĵ�����Ϊ:" << endl;
	wxr.Display();
	cout << "����Ҫɾ��Ԫ�ص�λ��i��" << endl;
	int del;
	cin >> del;
	cout<<"ɾ����Ԫ��Ϊ��"<< wxr.Dele(del);
	cout << "ɾ����ĵ�����Ϊ:" << endl;
	wxr.Display();
	cout << "������ĳ���Ϊ:" << wxr.Length()<< endl;
	cout << "�жϵ������Ƿ�Ϊ�գ�Ϊ�����1����Ϊ�����0��" <<wxr.Empty()<< endl;
	cout << "����Ҫ���Ԫ�ص�λ��i��" << endl;
	int get;
	cin >> get;
	cout << "iλ�õ�Ԫ��Ϊ:" << wxr.GetData(get) << endl;
	cout << "ɾ�����е������е�Ԫ��" << endl;
	wxr.DeleteAll();
	cout << "�жϵ������Ƿ�Ϊ�գ�Ϊ�����1����Ϊ�����0��" << wxr.Empty() << endl;
	system("pause");
	return 0;
}
#include<iostream>
#include "Ex3.h"
#include "Ex3.cpp"
using namespace std;
int main()
{
	cout << "输入一个数组，现在把数组插入到单链表中。" << endl;
	int n;
	cout << "输入数组的长度：" << endl;
	cin >> n;
	int *p = new int[n];
	for (int i = 1; i <= n; i++)
	{
		cout << "输入第" << i << "个元素" << endl;
		cin >> p[i-1];
	}
	LinkList<int> wxr(p, n);
	cout << "遍历单链表" << endl;
	wxr.Display();
	cout << "输入要插入元素的位置i：" << endl;
	int ist;
	cin >> ist;
	cout << "输入要插入的元素e：" << endl;
	int e;
	cin >> e;
	wxr.Insert(ist, e);
	cout << "插入后的单链表为:" << endl;
	wxr.Display();
	cout << "输入要删除元素的位置i：" << endl;
	int del;
	cin >> del;
	cout<<"删除的元素为："<< wxr.Dele(del);
	cout << "删除后的单链表为:" << endl;
	wxr.Display();
	cout << "单链表的长度为:" << wxr.Length()<< endl;
	cout << "判断单链表是否为空，为空输出1，不为空输出0：" <<wxr.Empty()<< endl;
	cout << "输入要获得元素的位置i：" << endl;
	int get;
	cin >> get;
	cout << "i位置的元素为:" << wxr.GetData(get) << endl;
	cout << "删除所有单链表中的元素" << endl;
	wxr.DeleteAll();
	cout << "判断单链表是否为空，为空输出1，不为空输出0：" << wxr.Empty() << endl;
	system("pause");
	return 0;
}
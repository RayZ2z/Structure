#include<iostream>
#include "Ex3.h"

template<class T>
inline LinkList<T>::LinkList()
{
	head = new Node<T>;
	head->next = NULL;
}
template<class T>
LinkList<T>::LinkList(T a[], int n)
{
	head = new Node<T>;
	head->next = NULL;
	Node<T> *rear, *s;
	rear = head;
	
	for (int i = 0; i<n; i++)
	{
		s = new Node<T>;
		s->data = a[i];
		s->next = NULL;
		rear->next = s;
		rear = rear->next;
	}
}
template<class T>
void LinkList<T>::Insert(int i, T e)
{
	Node<T> *p = head;
	int j = 1;
	while(p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p)
	{
		cout << "不合法！";
	}
	else
	{
		Node<T> *s = new Node<T>;
		s->data = e;
		s->next = p->next;
		p->next = s;
	}
}
template<class T>
T LinkList<T>::Dele(int i)
{
	Node<T> *p = head,*q;
	int x;
	int j = 0;
	while (p && j < i-1)
	{
		p = p->next;
		j++;//找到i-1和结点
	}
	if (!p || !p->next )
	{
		cout << "i不合法！请重新输入：";
	}
	else 
	{
		q = p->next;
		x = q->data;
		p->next = q->next;
		delete q;
		return x;
	}
}
template<class T>
void LinkList<T>::Display()
{
	Node<T> *p = head->next;
	while (p)
	{
		cout << p->data << endl;
		p = p->next;
	}
}

template<class T>
int LinkList<T>::Length()
{
	Node<T> *p = head;
	int j = 0;
	while (!p->next == NULL)
	{
		p = p->next;
		j++;
	}
	return j;
}

template<class T>
bool LinkList<T>::Empty()
{
	if (head->next == NULL) {
		return 1;
	}
	else
	{
		return 0;
	}
}

template<class T>
T LinkList<T>::GetData(int i)
{
	Node<T> *p;
	p = head->next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p)
	{
		cout << "i值不合法，超过的元素的个数。" << endl;
	}
	else return p->data;
}

template<class T>
void LinkList<T>::DeleteAll()
{
	head->next = NULL;

}

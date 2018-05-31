#ifndef EX3_H
#define EX3_H
template<class T>
class LinkList;
template<class T>
class Node
{
	friend class LinkList<T>;
private:
	Node<T>	*next;
	T data;
};
template<class T>
class LinkList
{
private:
	Node<T> *head;
public:
	LinkList();
	LinkList(T a[], int n);
	void Insert(int i, T e);
	T Dele(int i);
	void Display();
	int Length();
	bool Empty();
	T GetData(int i);
	void DeleteAll();
};
#endif // !EX3_H

#ifndef LINK_H
#define LINK_H
#include "Node.h"


template<typename T>
class List
{
private:
	List();
	List(Node * head, Node * tail);
	List(const List & copy);
	~List();
	List & operator =(const List & rhs);
	bool isEmpty();
	const T & First();
	const T & Last();
	void Prepend(Node * NN);
	void Append(Node *NN);
	void Purge();
	void Extract(Node *NN);
	void InsertAfter(Node * NN);
	void InserBefore(Node * NN);
	Node & getHead() const;
	Node * getTail() const;
	void PrintForwards();
	void PrintBackwards();

public:
	Node * m_Head;
	Node * m_Tail;
};


#endif LINK_H

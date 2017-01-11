#ifndef LIST_H
#define LIST_H
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


#endif LIST_H


template<typename T>
inline List<T>::List()
{
}

template<typename T>
inline List<T>::List(Node * head, Node * tail)
{
}

template<typename T>
inline List<T>::~List()
{
}

template<typename T>
inline List & List<T>::operator=(const List & rhs)
{
	// TODO: insert return statement here
}

template<typename T>
inline bool List<T>::isEmpty()
{
	return false;
}

template<typename T>
inline const T & List<T>::First()
{
	// TODO: insert return statement here
}

template<typename T>
inline const T & List<T>::Last()
{
	// TODO: insert return statement here
}

template<typename T>
inline void List<T>::Prepend(Node * NN)
{
}

template<typename T>
inline void List<T>::Append(Node * NN)
{
}

#ifndef LIST_H
#define LIST_H

template<typename T>
class Node;

template<typename T>
class List
{
public:
	List();
	//List(T data);
	//List(Node<T> * head, Node<T> * tail);
	List(const List & copy);
	~List();
	List & operator =(const List & rhs);
	bool isEmpty();
	const T & First();
	const T & Last();
	void Prepend(Node<T> * NN);
	void Append(Node<T> *NN);
	void Purge();
	void Extract(Node<T> *NN);
	void InsertAfter(Node<T> * NN);
	void InserBefore(Node<T> * NN);
	Node<T> * getHead() const;
	Node<T> * getTail() const;
	void PrintForwards();
	void PrintBackwards();

private:
	Node<T> * m_Head;
	Node<T> * m_Tail;
};


template<typename T>
inline List<T>::List(): m_Head(nullptr), m_Tail(nullptr)
{	
}

//template<typename T>
//inline List<T>::List(T data)
//{
	//m_Head.m_Data = data;
//}

//template<typename T>
//inline List<T>::List(Node<T> * head, Node<T> * tail)
//{
	//m_Head = head;
	//m_Tail = tail;
	//m_Head->m_Next = m_Tail;
	//m_Tail->m_Previous = m_Head;
	//m_Head->m_Previous = nullptr;
	//m_Tail->m_Next = nullptr;
//}

template<typename T>
inline List<T>::~List()
{
	Purge();
}

template<typename T>
inline List<T> & List<T>::operator=(const List & rhs)
{
	if (this != &rhs)
	{
		m_Head = rhs.m_Head;
		m_Tail = rhs.Tail;
	}

	return *this;
}

template<typename T>
inline bool List<T>::isEmpty()
{
	bool empty = true;
	if (m_Head != nullptr)
	{
		empty = false;
	}
	return empty;
}

template<typename T>
inline const T & List<T>::First()
{
	return m_Head.m_Data;
}

template<typename T>
inline const T & List<T>::Last()
{
	return m_Tail.m_Data;
}

template<typename T>
inline void List<T>::Prepend(Node<T> * NN)
{
	NN->m_Previous = nullptr;
	NN->m_Next = m_Head;
	m_Head = NN;
}

template<typename T>
inline void List<T>::Append(Node<T> * NN)
{

	NN->m_Next = nullptr;
	NN->m_Previous = m_Tail;
	m_Tail = NN;
}

template<typename T>
inline void List<T>::Purge()
{
	Node<T> * travel = new Node<T>;
	travel = m_Head->m_Next;
	while (!isEmpty)
	{
		delete m_Head;
		m_Head = travel;
		travel = m_Head->m_Next;
	}
}

template<typename T>
inline void List<T>::Extract(Node<T> * NN)
{
	if (!isempty)
	{

	}
}

template<typename T>
inline void List<T>::InsertAfter(Node<T>* NN)
{
}

template<typename T>
inline void List<T>::InserBefore(Node<T>* NN)
{
}

template<typename T>
inline Node<T> * List<T>::getHead() const
{
	return nullptr;
}

template<typename T>
inline Node<T> * List<T>::getTail() const
{
	return nullptr;
}

template<typename T>
inline void List<T>::PrintForwards()
{
}

template<typename T>
inline void List<T>::PrintBackwards()
{
}



#endif LIST_H


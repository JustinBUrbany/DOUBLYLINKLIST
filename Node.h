#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
private:
	Node();
	Node(T Data, Node * Next, Node * Previous);
	Node(const Node & copy);
	Node & operator =(const Node & rhs);
	~Node();
	Node getNext()const;
	void setNext(Node * Next);
	Node getPrev()const;
	void setPrev(Node * Prev);
	T getData()const;
	void setData(T Data);
public:
	T	m_Data;
	Node * m_Next;
	Node * m_Previous;
};


#endif
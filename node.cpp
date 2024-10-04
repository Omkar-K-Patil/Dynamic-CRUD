#include "node.h"

template<class T>
int Node<T>::count=1;

template<class T>
Node<T>::Node(T& data)
{
	this->data = data;
	this->next=NULL;
}

template<class T>
void Node<T>::setData(T& data)
{
	this->data=data;
}

template<class T>
void Node<T>::setNext(Node<T>* n)
{
	this->next=n;
}

template<class T>
T& Node<T>::getData()
{
	return this->data;
}

template<class T>
Node<T>* Node<T>::getNext()
{
	return this->next;
}

template<class T>
int Node<T>::getCount()
{
	return count;
}

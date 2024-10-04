#include "player.h"
#include "book.h"

template<class T>
class Node
{
	T data;
	Node<T>* next;
	static int count;
	public:
		Node(T&);
		void setData(T&);
		void setNext(Node<T>*);
		T& getData();
		Node<T>* getNext();
		static int getCount();
	
};
#include "node.cpp"
#include<fstream>

template<class T>
class Linkedlist
{
	Node<T>* start;
	
	public:
		Linkedlist();
		void insertBeg(T&);
		void insertEnd(T&);
		void insertMid(T&,int);
		Node<T>* searchRecord(char*);
		Node<T>* searchRecord(int&);
		void update(Node<T>*&);
		void deleteRecord(char*);
		void deleteRecord(int&);
		void display();
		~Linkedlist();
	
};
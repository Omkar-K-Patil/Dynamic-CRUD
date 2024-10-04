#include "linked_list.h"

template<class T>
Linkedlist<T>::Linkedlist()
{
	this->start = NULL;
	// READING THE DATA FROM THE FILE 
	
	ifstream readplayer;
	
	if(sizeof(T) == sizeof(Players))
	{
		readplayer.open("Player_data.bin",ios_base::binary);
	}
	if(sizeof(T) == sizeof(Books))
	{
		readplayer.open("Book_data.bin",ios_base::binary);
	}
	if(readplayer.is_open())
	{
		T p1;
		while(!readplayer.eof())
		{
			readplayer.read(reinterpret_cast<char*>(&p1), sizeof(T));
			if(!readplayer.eof())
			{
				insertEnd(p1);
			}
		}
		readplayer.close();
	}
	
}

// INSERT RECORD AT BEGINNING 

template<class T>
void Linkedlist<T>::insertBeg(T& p)
{
	Node<T>* temp=new Node<T>(p);
	temp->setNext(this->start);
	this->start=temp;
}

// INSERT RECORD AT END 

template<class T>
void Linkedlist<T>::insertEnd(T& p)
{
	Node<T>* temp=new Node<T>(p);
	if(this->start==NULL)
	{
		this->start=temp;
	}
	else
	{
		Node<T>* p = this->start;
		while(p->getNext()!=NULL)
		{
			p = p->getNext();
		}
		
		p->setNext(temp);
	}
}

// INSERT RECORD AT POSITION 

template<class T>
void Linkedlist<T>::insertMid(T& p,int pos)
{
	Node<T>* temp=new Node<T>(p);
	
	if(this->start==NULL)
	{
		this->start=temp;
	}
	else if(pos==1)
	{
		temp->setNext(this->start);
		this->start=temp;
	}
	else
	{
		int count=1;
		Node<T>* p = this->start;
		while(count<pos-1 && p->getNext()!=NULL )
		{
			p = p->getNext();
			count++;
		}
		temp->setNext(p->getNext());
		p->setNext(temp);
	}
}

// SEARCH RECORD BY NAME 

template<class T>
Node<T>* Linkedlist<T>::searchRecord(char* nm)
{
	Node<T>* p=this->start;
	if(this->start ==NULL)
	{
		cout<<"\n\t NO RECORDS FOUND EMPTY DATA!!!!!!!!!!!";
		return NULL;
	}
	while(p!=NULL)
	{
		if(strcasecmp(p->getData().getName(),nm) ==0)
		{
			return p;
		}
		p = p->getNext();
	}
	return NULL;
}

// SEARCH RECORD BY NUMBER 

template<class T>
Node<T>* Linkedlist<T>::searchRecord(int& num)
{
	Node<T>* p=this->start;
	if(this->start ==NULL)
	{
		cout<<"\n\t NO RECORDS FOUND EMPTY DATA!!!!!!!!!!!";
		return NULL;
	}
	while(p!=NULL)
	{
		if(p->getData().getNumber() == num)
		{
			return p;
		}
		p = p->getNext();
	}
	return NULL;
}

// UPDATE RECORD BY NAME 

template<class T>
void Linkedlist<T>::update(Node<T>*&ply)
{
	ply->getData().updateRecord();
}

// DELETE RECORD BY NAME 

template<class T>
void Linkedlist<T>::deleteRecord(char* name)
{
	Node<T>* p=this->start;

	if(this->start==NULL)
	{
		cout<<"\n INVAID POSITION \n";
		return;
	}
	if(strcasecmp(p->getData().getName(),name) == 0)
	{
		title();
		p->getData().display();
		cout<<"\n\n Record is deleted \n\n";
		this->start = this->start->getNext();
		delete p;
		return;
	}
	Node<T>* q;
	while(strcasecmp(p->getData().getName(),name) !=0 && p->getNext()!=NULL)
	{
		q=p;
		p=p->getNext();
	}
	if(strcasecmp(p->getData().getName(),name) ==0)
	{
		q->setNext(p->getNext());
		delete p;
		return;
	}
	cout<<"\n\n\t NO SUCH RECORD EXISTS \n\n";
}

// DELETE RECORD BY NUMBER 

template<class T>
void Linkedlist<T>::deleteRecord(int& num)
{
	Node<T>* p=this->start;

	if(this->start==NULL)
	{
		cout<<"\n INVAID POSITION \n";
		return;
	}
	if(p->getData().getNumber() == num)
	{
		title();
		p->getData().display();
		cout<<"\n\n Record is deleted \n\n";
		this->start = this->start->getNext();
		delete p;
		return;
	}
	Node<T>* q;
	while(p->getData().getNumber() !=num && p->getNext()!= NULL)
	{
		q=p;
		p=p->getNext();
	}
	if(p->getData().getNumber() == num)
	{
		q->setNext(p->getNext());
		delete p;
		return;
	}
	cout<<"\n\n\t NO SUCH RECORD EXISTS \n\n";
}

// DISPLAY PLAYER BY NAME 

template<class T>
void Linkedlist<T>::display()
{
	if(this->start==NULL)
	{
		cout<<"\n LINKED LIST IS EMPTY \n";
	}
	else
	{

		Node<T>* p = this->start;
		while(p!=NULL)
		{
			T& e=p->getData();
			e.display();
			p = p->getNext();
			
		}
	}
}

// LINKED-LIST DESTRUCTOR 

template<class T>
Linkedlist<T>::~Linkedlist()
{
	Node<T>* p=this->start;
	ofstream out;
	if(sizeof(T) == sizeof(Players))
	{
		out.open("Player_data.bin",ios_base::binary);
	}
	if(sizeof(T) == sizeof(Books))
	{
		out.open("Book_data.bin",ios_base::binary);
	}
	if(p!=NULL)
	{
		cout<<"\n\n aalay itha \n\n";
		
		while(p!=NULL)
		{
			out.write((char*)(&(p->getData())),sizeof(T));
			this->start = p->getNext();
			delete p;
			p = this->start;
		}
		out.close();
	}

}
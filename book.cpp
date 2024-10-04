#include "book.h"


Books::Books()
{
	strcpy(this->name,"NA");
	this->number=0;
	strcpy(this->authorname,"NA");
	this->price=0;
	this->ratings=0;
}

Books::Books(char* bname,int bookid,char* authorname,double price,int ratings)
{
	strcpy(this->name,bname);
	this->number=bookid;
	strcpy(this->authorname,authorname);
	this->price=price;
	this->ratings=ratings;
}
//mutators
void Books::setName(char* bname)
{
	strcpy(this->name,bname);
}
void Books::setNumber(int& bookid)
{
	this->number=bookid;
}
void Books::setAuthorname(char* authorname)
{
	strcpy(this->authorname,authorname);
}
void Books::setPrice(double price)
{
	this->price=price;
}
void Books::setRatings(int ratings)
{
	this->ratings=ratings;
}

//asseccers
char* Books::getName()
{
	return this->name;
}
int Books::getNumber()
{
	return this->number;
}
char* Books::getAuthorname()
{
	return this->authorname;
}
double Books::getPrice()
{
	return this->price;
}
int Books::getRatings()
{
	return this->ratings;
}

void Books::updateRecord()
{
	int c2;
	cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
	cout<<"\n\t 1. Update Book price ";
	cout<<"\n\t 2. Update Book rating ";
	cout<<"\n   Enter your choice : ";
	cin>>c2;
	cout<<"\n-------------------------------------------------------\n";
	
	switch(c2)
	{
		case 1:
			{
				double price;
				cout<<"\n\n Enter the new match count : ";
				cin>>price;
				this->setPrice(price);
			}break;
		case 2:
			{
				int rat;
				cout<<"\n\n Enter the new run count : ";
				cin>>rat;
				this->setRatings(rat);
			}break;
		default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
	}
	
}

void Books::display()
{
    cout << "\t|"<<left<<setw(3)<<this->getNumber()<<"\t    |   "<<left<<setw(20)<<this->getName()<<"|  "<<left<<setw(20)<<this->getAuthorname()<<" |  "<<left<<setw(6)<<this->getPrice()<<" |   "<<left<<setw(4)<<this->getRatings()<<"   |\n";
    cout << "\t|___________|_______________________|_______________________|_________|__________|\n";
}

void bTitle()
{
	cout<<"\t----------------------------------------------------------------------------------\n";
	cout<<"\t| Book Id.  |\tBook name\t    |\tAuthor Name\t    |  Price  |  Ratings |\n";
	cout<<"\t|___________|_______________________|_______________________|_________|__________|\n";
}

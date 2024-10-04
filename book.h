#include<iostream>
#include<string.h>
#include <iomanip>

using namespace std;

//Books datatype
class Books
{
	char name[20];
	int number;
	char authorname[20];
	double price;
	int ratings;
	
	public:
	Books();
	
	Books(char*,int,char*,double,int);
	//mutators
	void setName(char*);
	void setNumber(int&);
	void setAuthorname(char*);
	void setPrice(double);
	void setRatings(int);
	
	//asseccers
	char* getName();
	int getNumber();
	char* getAuthorname();
	double getPrice();
	int getRatings();
	
	void updateRecord();
	void display();
	
};

void bTitle();
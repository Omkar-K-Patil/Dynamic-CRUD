#include "player.h"

Players::Players()
{
	strcpy(this->name,"NA");
	this->number=0;
	this->matches=0;
	this->runs=0;
	this->wickets=0;
}

Players::Players(char* name,int& jno,int& matches,int& runs,int& wickets)
{
	
	strcpy(this->name,name);
	this->number=jno;
	this->matches=matches;
	this->runs=runs;
	this->wickets=wickets;
}

//mutators
void Players::setName(char* name)
{
	strcpy(this->name,name);
}

void Players::setNumber(int& jno)
{
	this->number=jno;
}

void Players::setMatches(int matches)
{
	this->matches=matches;
}

void Players::setRuns(int runs)
{
	this->runs=runs;
}

void Players::setWickets(int wickets)
{
	this->wickets=wickets;
}

void Players::setSerialno(int sno)
{
	this->srno = sno;
}

//asseccers
char* Players::getName()
{
	return this->name;
}
int Players::getNumber()
{
	return this->number;
}
int Players::getMatches()
{
	return this->matches;
}
int Players::getRuns()
{
	return this->runs;
}
int Players::getWickets()
{
	return this->wickets;
}
int Players::getSerialno()
{
	return this->getSerialno();
}


void Players::updateRecord()
{
	int c2;
	cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
	cout<<"\n\t 1. Update player match count ";
	cout<<"\n\t 2. Update player runs ";
	cout<<"\n\t 3. Update player wickets ";
	cout<<"\n   Enter your choice : ";
	cin>>c2;
	cout<<"\n-------------------------------------------------------\n";
	
	switch(c2)
	{
		case 1:
			{
				int mcnt;
				cout<<"\n\n Enter the new match count : ";
				cin>>mcnt;
				this->setMatches(mcnt);
			}break;
		case 2:
			{
				int run;
				cout<<"\n\n Enter the new run count : ";
				cin>>run;
				this->setRuns(run);
			}break;
		case 3:
			{
				int wicket;
				cout<<"\n\n Enter the new wicket count : ";
				cin>>wicket;
				this->setWickets(wicket);
			}break;
		default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
	}
	
}



void Players::display()
{
	cout<<"\t|"<<left<<setw(2)<<this->srno<<"   | "<<left<<setw(20)<<this->getName()<<"|   "<<left<<setw(3)<<this->getNumber()<<"\t|  "<<left<<setw(4)<<this->getMatches()<<"\t  |  "<<left<<setw(6)<<this->getRuns()<<" |   "<<left<<setw(4)<<this->getWickets()<<"   |\n";
	cout<<"\t|_____|_____________________|___________|_________|_________|__________|\n";
}

void title()
{
	cout<<"\t------------------------------------------------------------------------\n";
	cout<<"\t|Sr.no|\tPlayer Name\t    | Jersy no. | Matches |  Runs   |  Wickets |\n";
	cout<<"\t|_____|_____________________|___________|_________|_________|__________|\n";
}

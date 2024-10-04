#include "linked_list.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	
	int choice;
	do
	{
		cout<<"\n\n----------------------- SELECT YOUR CHOICE ---------------------------";
		cout<<"\n\n\t 1. Player Management";
		cout<<"\n\t 2. Book Management";
		cout<<"\n\t 0. Save & Exit ";
		cout<<"\n-----------------------------------------------------------------------\n";
		cout<<"\n\tEnter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					Linkedlist<Players> l;
					int choice1;
					do
					{
						cout<<"\n\n----------------------- SELECT YOUR CHOICE ---------------------------";
						cout<<"\n                                                                     ";
						cout<<"\n\t 1. Insert Player ";
						cout<<"\n\t 2. Delete Player";
						cout<<"\n\t 3. Search Player ";
						cout<<"\n\t 4. Update Player";
						cout<<"\n\t 5. Display ";
						cout<<"\n\t 0. Exit ";
						cout<<"\n-----------------------------------------------------------------------\n";
						cout<<"\n|\tEnter your choice : ";
						cin>>choice1;
						
						switch(choice1)
						{
							case 1:
								{
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Insert Player at Begining ";
									cout<<"\n\t 2. Insert Player at End ";
									cout<<"\n\t 3. Insert Player at Position ";
									cout<<"\n\t   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												int jno,run,wick,mat;
												char nm[20];
												double sal;
												cout<<"\n Enter the Player name : ";
												cin>>nm;
												cout<<"\n Enter the player jersy number : ";
												cin>>jno;
												cout<<"\n Enter the number of matches played : ";
												cin>>mat;
												cout<<"\n Enter the runs scored by player : ";
												cin>>run;
												cout<<"\n Enter the Wickets taken player : ";
												cin>>wick;
												Players p(nm,jno,mat,run,wick);
												
												l.insertBeg(p);
											}break;
											
										case 2:
											{
												int jno,run,wick,mat;
												char nm[20];
												double sal;
												cout<<"\n Enter the Player name : ";
												cin>>nm;
												cout<<"\n Enter the player jersy number : ";
												cin>>jno;
												cout<<"\n Enter the number of matches played : ";
												cin>>mat;
												cout<<"\n Enter the runs scored by player : ";
												cin>>run;
												cout<<"\n Enter the Wickets taken player : ";
												cin>>wick;
												Players p(nm,jno,mat,run,wick);
												l.insertEnd(p);
											}break;
											
										case 3:
											{
												int jno,run,wick,mat,pos;
												char nm[20];
												double sal;
												cout<<"\n Enter the player name : ";
												cin>>nm;
												cout<<"\n Enter the player jersy number : ";
												cin>>jno;
												cout<<"\n Enter the number of matches played : ";
												cin>>mat;
												cout<<"\n Enter the runs scored by player : ";
												cin>>run;
												cout<<"\n Enter the Wickets taken player : ";
												cin>>wick;
												cout<<"\n Enter the position you want to enter the data at : ";
												cin>>pos;
												Players p(nm,jno,mat,run,wick);
												l.insertMid(p,pos);
											}break;
											
										default : cout<<"\n\t-------------------- INVALID CHOICE ----------------------\n";
									}
									
								}break;
								
							case 2:
								{
									
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Delete by Name ";
									cout<<"\n\t 2. Delete by Jersy number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char nm[20];
												cout<<"\n Enter the name of the player you want to delete : ";
												cin>>nm;
												l.deleteRecord(nm);
											}break;
											
										case 2:
											{
												int jno;
												cout<<"\n Enter the jersy number of the player you want to delete : ";
												cin>>jno;
												l.deleteRecord(jno);
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
										
							case 3:
								{
									
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Search by Name ";
									cout<<"\n\t 2. Search by Jersy number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char name[20];
												cout<<"\n Enter the name of the player you want to search : ";
												cin>>name;
												Node<Players>* pl = l.searchRecord(name);
												if(pl == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													title();
													pl->getData().display();
												}
											}break;
											
										case 2:
											{
												int jno;
												cout<<"\n Enter the jersy number of the player you want to search : ";
												cin>>jno;
												Node<Players>* pl = l.searchRecord(jno);
												if(pl == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													title();
													pl->getData().display();
												}
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
								}break;
								
							case 4:
								{
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Search by Name ";
									cout<<"\n\t 2. Search by Jersy number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char name[20];
												cout<<"\n Enter the name of the player you want to search : ";
												cin>>name;
												Node<Players>* ply=l.searchRecord(name);
												if(ply == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													l.update(ply);
												}
											}break;
											
										case 2:
											{
												int number;
												cout<<"\n Enter the jersy number of the player you want to search : ";
												cin>>number;
												Node<Players>* ply=l.searchRecord(number);
												if(ply == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													l.update(ply);
												}
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
								}break;
								
							case 5:
								{
									title();
									l.display();
								}break;
								}break;
								
				
							case 0:
								{
									cout<<"\n -------------------------------------------- EXITING --------------------------------------------------------\n";
								}break;
								
							default : cout<<"\n INVALID CHOICE \n";
						}
					}while(choice1!=0);
				}break;
				
			case 2:
				{
					Linkedlist<Books> l;
					int choice2;
					do
					{
						cout<<"\n\n----------------------- SELECT YOUR CHOICE ---------------------------";
						cout<<"\n                                                                     ";
						cout<<"\n\t 1. Insert Book";
						cout<<"\n\t 2. Delete Book";
						cout<<"\n\t 3. Search Book";
						cout<<"\n\t 4. Update Book";
						cout<<"\n\t 5. Display"; 
						cout<<"\n\t 0. Exit";
						cout<<"\n-----------------------------------------------------------------------\n";
						cout<<"\n\tEnter your choice : ";
						cin>>choice2;
						
						switch(choice2)
						{
							case 1:
								{
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Insert Book at Begining ";
									cout<<"\n\t 2. Insert Book at End ";
									cout<<"\n\t 3. Insert Book at Position ";\
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												int id,rat;
												double price;
												char nm[20];
												char athnm[20];
												double sal;
												cout<<"\n Enter the Book name : ";
												cin>>nm;
												fflush(stdin);
												cout<<"\n Enter the Author name : ";
												cin>>athnm;
												cout<<"\n Enter the Book id : ";
												cin>>id;
												cout<<"\n Enter the price of book : ";
												cin>>price;
												cout<<"\n Enter the ratings of book : ";
												cin>>rat;
												
												Books b(nm,id,athnm,price,rat);
												l.insertBeg(b);
											}break;
											
										case 2:
											{
												int id,rat;
												double price;
												char nm[20];
												char athnm[20];
												double sal;
												cout<<"\n Enter the Book name : ";
												cin>>nm;
												fflush(stdin);
												cout<<"\n Enter the Author name : ";
												cin>>athnm;
												cout<<"\n Enter the Book id : ";
												cin>>id;
												cout<<"\n Enter the price of book : ";
												cin>>price;
												cout<<"\n Enter the ratings of book : ";
												cin>>rat;
												
												Books b(nm,id,athnm,price,rat);
												l.insertEnd(b);
											}break;
											
										case 3:
											{
												int id,rat,pos;
												double price;
												char nm[20];
												char athnm[20];
												double sal;
												cout<<"\n Enter the Book name : ";
												cin>>nm;
												fflush(stdin);
												cout<<"\n Enter the Author name : ";
												cin>>athnm;
												cout<<"\n Enter the Book id : ";
												cin>>id;
												cout<<"\n Enter the price of book : ";
												cin>>price;
												cout<<"\n Enter the ratings of book : ";
												cin>>rat;
												cout<<"\n Enter the position you want to enter the data at : ";
												cin>>pos;
												Books b(nm,id,athnm,price,rat);
												l.insertMid(b,pos);
											}break;
											
										default : cout<<"\n\t-------------------- INVALID CHOICE ----------------------\n";
									}
									
								}break;
								
							case 2:
								{
									
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Delete by Name ";
									cout<<"\n\t 2. Delete by number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char nm[20];
												cout<<"\n Enter the name of the Book you want to delete : ";
												cin>>nm;
												l.deleteRecord(nm);
											}break;
											
										case 2:
											{
												int num;
												cout<<"\n Enter the Book number of the book you want to delete : ";
												cin>>num;
												l.deleteRecord(num);
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
										
							case 3:
								{
									
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Search by Book Name ";
									cout<<"\n\t 2. Search by Book number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char name[20];
												cout<<"\n Enter the name of the Book you want to search : ";
												cin>>name;
												Node<Books>* pl = l.searchRecord(name);
												if(pl == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													title();
													pl->getData().display();
												}
											}break;
											
										case 2:
											{
												int number;
												cout<<"\n Enter the Book number of the book you want to search : ";
												cin>>number;
												Node<Books>* pl = l.searchRecord(number);
												if(pl == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													bTitle();
													pl->getData().display();
												}
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
								}break;
								
							case 4:
								{
									int c2;
									cout<<"\n\n-------------------- SELECT YOUR CHOICE -----------------------";
									cout<<"\n\t 1. Search by Name ";
									cout<<"\n\t 2. Search by Book number ";
									cout<<"\n   Enter your choice : ";
									cin>>c2;
									cout<<"\n-------------------------------------------------------\n";
									
									switch(c2)
									{
										case 1:
											{
												char name[20];
												cout<<"\n Enter the name of the book you want to search : ";
												cin>>name;
												Node<Books>* b=l.searchRecord(name);
												if(b == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													l.update(b);
												}
											}break;
											
										case 2:
											{
												int num;
												cout<<"\n Enter the book number of the book you want to search : ";
												cin>>num;
												Node<Books>* b=l.searchRecord(num);
												if(b == NULL)
												{
													cout<<" Player not found \n";
												}
												else
												{
													l.update(b);
												}
											}break;
											
										default : cout<<"\n\t------------------------------ INVALID CHOICE ---------------------------\n";
									}
									
								}break;
								
							case 5:
								{
									bTitle();
									l.display();
								}break;
								}break;
								
				
							case 0:
								{
									cout<<"\n -------------------------------------------- EXITING --------------------------------------------------------\n";
								}break;
								
							default : cout<<"\n INVALID CHOICE \n";
						}
					}while(choice2!=0);
					
				}break;
		}
		
		
	}while(choice!=0);
	
	return 0;
}
#include<iostream>
using namespce std;

struct node
{
	char name[20];
	int data;
	node*next;
	
	int flag = 0;
};

class Book
{	char ch[20];
	int n,i;
	node*head = NULL,*temp = NULL,*t1 = NULL,*t2 = NULL;
	public:
		node*create();
		void insertb();
		void insertc();
		void inserts();
		void insertss();
		void displayb();
};

node* Book :: create()
{
	node* p = new node
	p->next = NULL;
	p->data = NULL;
	cout<<"Enter the name of Book :" ;
	cin>>p->name	
	return p;
}

void Book :: insertb()
{
	if(head == NULL)
	{
		t1 = create();
		head = t1;
	}
	else
	{
		cout<<"Book is Exist"<<endl;
	}
}

void Book:: insertc()
{
	if(head == NULL )
	{
		cout<<"There is No Book "<<endl;
	}
	else
	{
		cout<<"How many chapter do you want to insert : ";
		cin>>n;
		for(i=0;i<n;i++)
		{
			t1 =create();
			if(head ->flag == 0)
			{
				head -> data = t1;
				head -> flag = 1;
			}
			else
			{
				temp = head;
				temp = temp - > data;
				while(temp -> next != NULL)
				{
					temp = temp -> next;
				}
				temp -> next = t1;
			}
	}
}

void Book :: inserts()
{
	if(head == NULL)
	{
		cout<<"There is no Book"<<endl;
	}
	else
	{
		cout<<"Enter the chapter name in that you want to insert section : ";
		cin>>ch;
		temp = head ;
		if(temp ->flag == 0)
		{
			cout<<"There is  no chapter in book "<<endl;'
		}
		else
		{
			temp =temp -> data;
			 while(temp != NULL)
			{
				if(!strcmp(ch,temp->name))
				{
					cout<<"How many section do want to be insert : ";
					cin>>n;
					for(i =0;i<n;i++)
					{
						t1 = create();
						if(temp -> flag ==0)
						{		
							temp -> data = t1;
							temp -> flag 1;
							cout<<"\n*******";
							t2 = temp -> data;
						
						}
						else
						{
							cout<<"\n#######";
							while(t2->next == NULL)
							{
								t2 = t2-> next;
							}
							t2-> next = t1;
						}
					}
					break;
				}
				temp = temp -> next;
			}	
		}
	}
}

void Book :: insertss()
{
	if(head == NULL)
	{
		cout<<"There is no book..!!!"<<endl;
	}
	else
	{
		cout<<"Enter the name of chap in  that do want to insert : ";
		cin>>ch;
		temp = head;
		if(temp -> flag == 0)
		{
			cout<<"There is no chapter in book "<<endl;
		}
		else
		{
			temp = temp -> data;
			while(temp != NULL)
			{
				if(!strcmp(ch,temp->name))
				{
					cout<<"Enter the Section in that do you want to insert the subsection : ";
					cin>>ch;
					if(temp->flag == 0)
					{
						cout<<"There is no section"<<endl;
					}
					else
					{	temp = temp->data;
						while(temp != NULL)
						{
							if(!str(ch,temp->name)
							{
								cout<<"How many Subsection do you  want to insert : ";
						 		cin>>n;
								for(i =0 i<n;i++)
								{	
									t1 = create();
									if(temp -> flag == 0)
									{
										temp ->data t1;
										temp->flag =1;
										cout<<"\n******";
										t2 =temp -> data;
									}
									else
									{
										while(t2->next != NULL)
										{
											t2 = t2->next;
										}
										t2->next =t1;
									}
								}
								break;
							}
						temp = temp->next;
						}
					}
				}
				temp =temp->next;
			}
		}
	}
}

void Book :: display()
{
	if(head == NULL)
	{
		cout<<"Book not Exist"<<endl;
	}
	else
	{
		temp = head;
		cout<<"\n NAME OF BOOK : ";<<temp->name;
		if(temp->flag == 1)
		{
			temp = temp->data;
			while(temp != NULL)	
			{
				
				out<<"\n NAME OF CHAPTER : "<<temp->name;
				t1 = temp;
				if(t1 -> flag ==1)
				{
					t1 = t1 ->data;
					while(t1 ! =NULL)
					{
						cout<<"\n NAME OF SECTIONS : "<<endl;
						t2 =t1;
						if(t2 ->flag == NULL)
						{
							t2 = t2->data;
							while(t2!=NULL)
							{
								cout<<"\n NAMES OF SUBSECTIONS : "<<temp ->name;
								t2 =t2->next;
							}
						}
						t1 =t1 -> next;
					}
				}
				temp =temp->next;
			}
		}
	}
}

int main()
{
	Book obj;	]
	int ch;
	do
	{
		cout<<"...MENU..."<<endl;
		cout<<"1.insert book "<<endl;
		cout<<"2.insert chapter "<<endl;
		cout<<"3.insert Section "<<endl;
		cout<<"4.insert SubSections"<<endl;
		cout<<"5.Display Book "<<endl;
		cout<<"6.Exit"<<endl;
		
		cout<<"Enter your Choice : ";
		cin>>ch;
		
		switch(ch)
		{	
			case 1:
				obj.insertb();
				break;
				cout<<endl;
			case 2:
				obj.insertc();
				break;
				cout<<endl;
			case 3:
				obj.inserts();
				break;
				cout<<endl;
			case 4:
				obj.insertss();
				break;
				cout<<endl;	
			case 5:
				obj.display();
				break;
				cout<<endl;			
		}
		while(!ch = 6);
		return 0;
}
			

		
			
		

						
						
						

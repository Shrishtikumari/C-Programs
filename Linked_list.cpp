

/*
 Name:Shrishti Kumari
 Description: To demonstrate a program to create a class called LIST (linked list) with member functions to:
              i. Insert an element at any position.
              ii. To display the list.

 Algorithm:

         Algorithm description:This algorithm is all about how we create a class called LIST (linked list) with member functions to:
                                  i. Insert an element at any position.
                                  ii. To display the list.

        Input Variables:choice, data, n, position,t
        Output Variables:functions were giving the output.

    1.Start
    2.Create a class List with some data members and member function to perform all the operations that were asked.
    3.In main function.
    4.Creating class object List l
    5.Creating class object List *head->NULL
    6.Declare n, choice,t
    7.Check until while(1)
    8.Display "==============IMPLEMENTING LINKED LIST IN C++==============="
    9.Display "**************************************************"
   10.Display "MENU:";
   11.Display "1.To insert element at any specified position."
   12.Display "2.To display the list."
   13.Display "3.To exit."
   14.Display "**************************************************"
   15.Display "Enter your choice:"
   16.Read choice.
   17.Constructing switch case according to the user choice.
   18.switch(choice)
      18.1 case 1:
              1.Display "=>Enter the element which you want to insert:"
			  2.Read n
			  3.Calling member function the perform insert at any specified position.
              4.head=l.insert_anyPos(head,n)
                  1.Create a class object List *ptr
                  2.ptr=new List() Alloting memory in heap
    		      3.List *temp = head
    		      4.Declare i,position
                  5.Display "=>Enter the position where you want to insert the element:"
                  6.Read position
                  7.Assign ptr->data=n
    		      8.ptr->link=NULL
    		      9.Check if(head==NULL && position>1) otherwise go to step 10.
    		         9.1 Display "Insertion can't be done:: whole list is empty."
                     9.2 return head
                 10.Check if(position==1 || position==0) otherwise go to step 11.
                     10.1 ptr->link=head
        		     10.2 head<-ptr
                     10.3 Display " n is inserted at position "
        		     10.4 return head
                 11.for i<-1 to position-1
                     11.1 Check if(temp->link==NULL) otherwise go to step 11.
                         1.Display "Insertion can't be done."
           		 	     2.return head
        		     11.2 temp=temp->link;
                 12.ptr->link=temp->link
    		     13.temp->link=ptr
                 14.Display " n is inserted at position "
    		     15.return head
              5.break

      18.2 case 2:
              1.Calling member function to display the list.
              2. l.display(head)
                  1.Check if(head==NULL) otherwise go to step 2.
                     1.1 Display "List is vaccant:: nothing to display."
                  2.Creating class object List *temp;
                  3.temp<-head
                  4.Display "Elements in the list are:"
                  5.while temp!<-NULL
                     5.1 Display temp->data
                     5.2 temp=temp->link
             3.break
             
      18.3 case 3:
              1.exit(0) Terminate out of the program.

      18.4 default:
			  1.Display "You have choosen wrong input."
			  2."Do you want to continue (if YES= press 1, if NO=press 0):"
			  3.Read t
              4.Check if(t==0) otherwise continue.
                 4.1 Display "EXITING!"
                 4.2 exit(0) Terminate out of the program.
  19.Stop


 INPUTS / OUTPUTS

 ==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:1

=>Enter the element which you want to insert:2
=>Enter the position where you want to insert the element:1

2 is inserted at position  1 .

==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:1

=>Enter the element which you want to insert:3
=>Enter the position where you want to insert the element:1

3 is inserted at position  1 .

==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:2
Elements in the list are:
3       2
==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:1

=>Enter the element which you want to insert:55
=>Enter the position where you want to insert the element:0

55 is inserted at position  0 .

==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:1

=>Enter the element which you want to insert:78
=>Enter the position where you want to insert the element:2

78 is inserted at position  2 .

==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.
**************************************************

Enter your choice:2
Elements in the list are:
55      3       78      2
==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:5

You have choosen wrong input.
Do you want to continue (if YES= press 1, if NO=press 0):1

==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:2
Elements in the list are:
55      3       78      2
==============IMPLEMENTING LINKED LIST IN C++===============

**************************************************

MENU:
1.To insert element at any specified position.
2.To display the list.
3.To exit.

**************************************************

Enter your choice:3

*/

#include <iostream>
using namespace std;

//Creating a class which have some data members and inline function too.
class List
{	 	  	 	  	 	   	        	 	
  private://Access specifier

  //Data members
	int data;
	List *link;

	public://Access specifier

      //Definning member function inside the class to insert an element at any specified position
		List *insert_anyPos(List *head,int n)
		{
			List *ptr=new List();//Alloting memory in heap
    		List *temp = head;
    		int i,position;//Declaring

    		cout<<"=>Enter the position where you want to insert the element:";
			cin>>position;//Reading position

            ptr->data=n;
    		ptr->link=NULL;

    		if(head==NULL && position>1)//Checking
    		{
    			cout<<"Insertion can't be done:: whole list is empty.\n";
    			return head;//returning
    		}

    		if(position==1 || position==0)//Checking
    		{
        		ptr->link=head;
        		head=ptr;
        		cout<<"\n"<<n<<" is inserted at position  "<<position<<" .\n";//Displaying
        		return head;//returning
    		}

            //Constructing for loop to work according to the condition.
    		for(i=1;i<=position-1;i++)
    		{	 	  	 	  	 	   	        	 	
        		if(temp->link==NULL)
        		{
           		 	cout<<"Insertion can't be done.\n";
           		 	return head;
        		}
                temp=temp->link;
            }

            ptr->link=temp->link;
    		temp->link=ptr;
            cout<<"\n"<<n<<" is inserted at position  "<<position<<" .\n";//Displaying
    		return head;

		}

		void display(List *);//Declaring member function
};

//Definning member function to perform the display operation.
void List::display(List *head)
{
    if(head==NULL)//If NULL
     {
        cout<<"List is vaccant:: nothing to display.\n";
     }

    else//If not NULL
     {
        List *temp=head;
        cout<<"Elements in the list are:\n";
        while(temp!=NULL)//if it is not null.
            {
                cout<<temp->data<<"\t";
                temp=temp->link;//Assigning
            }
     }	 	  	 	  	 	   	        	 	
}

//Main function
int main()
{
    List l;//Creating object of class List
	List *head=NULL;
    int n,choice,t;//Declaring

	while(1)
	{
      cout<<"\n==============IMPLEMENTING LINKED LIST IN C++===============\n";

      cout<<"\n**************************************************\n";
      cout<<"\nMENU:\n";
      cout<<"1.To insert element at any specified position.\n";
      cout<<"2.To display the list.\n";
      cout<<"3.To exit.\n";
      cout<<"\n**************************************************\n";

      cout<<"\nEnter your choice:";
      cin>>choice;//Reading user choice

      //Constructing switch case according to the user choice.
      switch(choice)
      {
         case 1:
            cout<<"\n=>Enter the element which you want to insert:";
			cin>>n;//Reading n
            head=l.insert_anyPos(head,n);//Calling member function the perform insert at any specified position.
            break;//Terminate out of the loop.

         case 2:
            l.display(head);//Calling member function to display the list.
            break;//Terminate out of the loop.

         case 3:
            exit(0);//Terminate out of the program.

		 default:
			cout<<"\nYou have choosen wrong input.\n";
			cout<<"Do you want to continue (if YES= press 1, if NO=press 0):";
			cin>>t;//Reading user choice.
			if(t==0)
            {	 	  	 	  	 	   	        	 	
                cout<<"\nEXITING!\n";
                exit(0);//Terminate out of the program.
            }
      }
	}
 return 0;//As return type is int
}

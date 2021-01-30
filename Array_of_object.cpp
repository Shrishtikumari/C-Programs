/*

Name:Shrishti Kumari

Description:To demonstrate a program to create a class called BOOK with the following data members and member function and peform searching operation to find book usin ISBN no.
Date:8/09/2020

Algorithm:
   
     Algorithm Description: This algorithm is about how we implement a class called BOOK and and how we implemnet following operations to demonstrate all the functions.
     Globally declared Variables:MAX=5,i,BOOK B[MAX]
     Input Variables:Title[30],Author[30], Price,ISBN_No,s
     Output Variables:flag
     
    1.Start
    2.Create a class  name BOOK and declared private data members and public member functions.
    3.In main function we make a class BOOK object B[MAX]
    4.Declared s
    5.Display  "******ENTER DETAILS OF 5 BOOK:*******"
    6.Set i to 0
    7.If i>5 then it go to step 17
    8.Display "******************************************"
    9.Display "Enter employee i+1 info:"
    10.Calling member function of the class which is public and we will access all the private date members into it.
    11.B[i].Read()
       11.1 Display "Title:"
       11.2 Read Title
       11.3 Display "ISBN no:"
       11.4 Read ISBN_No
       11.5 Display "Author name:"
       11.6 Read Author
       11.7 Display "Book price:"
       11.8 Read Price
    12.Display "Title  ISBN  Author Price"
    13.Calling member function of the class which is public and perform all the operations that were asked in it.
    14.B[i].Display() and it will display all the data member in tabular form
    15.Set i to i+1
    16.Go to step 7
    17.Display "***We have facilities to find book in library.***"
    18.Display "Enter book ISBN number:"
    19.Read s
    20.Calling member function of the class which is public and perform searching of the book by it's ISBN no
    21.B[i].Search_book(s) with argument s
       21.1 Declare and initialize flag=0;
       21.2 Set i to 0
       21.3 If i>5 then go to step 21.7 
       21.4 Check if(B[i].ISBN_No==s) otherwise go to step 21.5
           21.4.1 Declare flag=1
           21.4.2 Display "Founded at Position: i+1"
           21.4.3 Display "Title: "
           21.4.4 Display "ISBN: "
           21.4.5 Display "Author name: "
           21.4.6 Display "Book Price: "
           21.4.7 Break
       21.5 Set i to i+1
       21.6 Go to step 21.3
       21.7 Check  if(flag==0)
           21.7.1 Display "Not founded."
    22.Stop
    
    
*/

#include<iostream>//Header file
#define MAX 5//Globally declaring size as 5
using namespace std;
 int i;//Globally declaring
 
//Class name
 class BOOK
 {	 	  	 	  	 	   	        	 	
     private://Privat access specifier
        //Data members
         char Title[30];
         char Author[30];
         int Price;
         int ISBN_No;

    public://Public access specifier
        //Member function
          void Read();//To read all data members
          void Search_book(int);//To perfom searching of book details through ISBN_No
          void Display();//To display all data members details
 };
 
 BOOK B[MAX];//Declaring class object
 
 //Defining member function using scope resolution
 void BOOK::Read()
 {

     cout<<"Title: ";//Displaying
     cin>>Title;//Reading
     
         cout<<"ISBN no : ";//Displaying
         cin>>ISBN_No;//Reading
         
     cout<<"Author name: ";//Displaying
     cin>>Author;//Reading
     
         cout<<"Book price: ";//Displaying
         cin>>Price;//Reading
 }

 //Defining member function using scope resolution
 void BOOK::Display()
 {	 	  	 	  	 	   	        	 	
   cout<<Title<<" \t "<<ISBN_No<<"\t"<<Author<<" \t "<<Price<<endl;
 }
 
  //Defining member function using scope resolution
 void BOOK::Search_book(int s)
 {
     int flag=0;//Declaring and initializing
    for(i=0;i<5;i++)
    {
        
        if(B[i].ISBN_No==s)//Checking
        {
            flag=1;//Initialized in the loop
            cout<<endl;
            cout<<"Founded at Position: "<<i+1<<endl;//Displaying all the info
            cout<<"Title: "<<B[i].Title<<endl;
           
            cout<<"ISBN: "<<B[i].ISBN_No<<endl;
            cout<<"Author name: "<<B[i].Author<<endl;
            
            cout<<"Book Price: "<<B[i].Price<<endl;
            break;//It will terminate out of the loop
        }
    }
    
    //If not founded condition
    if(flag==0)
    {
        cout<<"Not founded.";
    }
 }


//main function
 int main()
 {	 	  	 	  	 	   	        	 	
    int s;//Declaring
    cout<<" ******ENTER DETAILS OF 5 BOOK:*******"<<endl;

    //Checking process in for loop
    for(i=0;i<5;i++)
    {
        cout<<endl<<"********************************"<<endl;
        cout<<"Enter employee  "<<i+1<<" info:"<<endl;
        B[i].Read();//Reading all the info that were asked into it
        
        cout<<endl<<"Title"<<" \t "<<"ISBN"<<"\t"<<"Author"<<" \t "<<"Price"<<endl;
        B[i].Display();//Calling class member to perform Displaying of all the info
    }
    
    cout<<"***********************************************************************************"<<endl;
    cout<<endl<<"***We have facilities to find book in library.***"<<endl;
    
    cout<<endl<<"Enter book ISBN number:";
    cin>>s;//Reading to search
    
    B[i].Search_book(s);//Calling class member function to perform searching

      return 0;//As return-type is int
 }
	 	  	 	  	 	   	        	 	

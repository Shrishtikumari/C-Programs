
/*
   Name: Shrishti Kumari
   Description: To demonstrate a program to implement a Class Twovalues with two integer type data members and 
                member function to read values in those data members and to Create another Class Min_Max and 
                declare it as friend of Class Twovalues. Min_Max should have member functions to find the minimum 
                and maximum of two values.
                
   Algorithm:
       
         Algorithm description: This algorithm is all about how we implement a Class Twovalues with two integer type
                                 data members and member function to read values in those data members and to Create 
                                 another Class Min_Max and declare it as friend of Class Twovalues where Min_Max should have 
                                 member functions to find minimum and maximum of two values.
                                 
         Input Variables: a, b
         Output Variables:Min(Twovalues x) ,Max(Twovalues y) member functions will give output
    
    1.Start
    2.Creating a class Twovalues which have friend function class Min_Max and data members and member function.
    3.In main function
    4.Declaring class object Twovalues T
    5.Display "***************PROGRAM TO FIND MAXIMUM AND MINIMUM*****************"
    6.Display "------------------------------------------------------"
    7.Display "******************************************************"
    8.Calling member function of class Twovalues to read data
    9.T.read()
       9.1 Display "Enter value for a:"
       9.2 Reading a
       9.3 Display "Enter value for b:"
       9.4 Reading b
   10.Display "******************************************************"
   11.Display "------------------------------------------------------"
   12.Declaring friend function of class Twovalues i.e, Min_Max
   13.Min_Max m
   14.Calling member function of class Min_Max  which was a friend of class Twovalues to find minimum value and to display.
   15.Display "Minimum value is=" by calling m.Min(T)
   16.Calling member function of class Min_Max  which was a friend of class Twovalues to find maximum value and to display.
   17.Display "Maximum value is=" by calling m.Max(T)
   18.Stop
   

 INPUT / OUTPUT

***************PROGRAM TO FIND MAXIMUM AND MINIMUM*****************

------------------------------------------------------
******************************************************

Enter value for a:5
Enter value for b:2

******************************************************
------------------------------------------------------

Minimum value is=2
Maximum value is=5

   
*/

#include <iostream>//Header file

using namespace std;

//Creating class Twovalues
class Twovalues
{	 	  	 	  	 	   	        	 	
  private://Access specifier

    //Data members
     int a;
     int b;

  public://Access specifier

    //Member function
     void read();
     friend class Min_Max;
};

//Definning member function of class Twovalues for reading data members
void Twovalues::read()
{
    cout<<"Enter value for a:";
    cin>>a;//Reading a
    cout<<"Enter value for b:";
    cin>>b;//Reading b

}

//Definning class Min_Max which is a friend of class Twovalues.
class Min_Max
{
  public:

    //Member function
    int Min(Twovalues x);
    int Max(Twovalues y);
};

//Definning function Min(Twovalues x) to find minimum value.
int Min_Max::Min(Twovalues x)
{	 	  	 	  	 	   	        	 	
    return x.a < x.b? x.a:x.b;//returning
}

//Definning function Max(Twovalues x) to find maximum value.
int Min_Max::Max(Twovalues y)
{
    return y.a > y.b? y.a:y.b;//returning
}

int main()
{
  Twovalues T;//Declaring class object
  cout<<"\n***************PROGRAM TO FIND MAXIMUM AND MINIMUM*****************\n";
  cout<<"\n------------------------------------------------------\n";
  cout<<"******************************************************\n\n";
  T.read();//Calling member function of class Twovalues to read data
  cout<<"\n******************************************************\n";
  cout<<"------------------------------------------------------\n";
  Min_Max m;//Declaring class object

  cout<<"\nMinimum value is="<<m.Min(T)<<endl;//Calling member function of class Min_Max  which was a friend of class Twovalues to find minimum value and to display.
  cout<<"Maximum value is="<<m.Max(T)<<endl;//Calling member function of class Min_Max  which was a friend of class Twovalues to find maximum value and to display.
  return 0;//As return type is int
}


	 	  	 	  	 	   	        	 	

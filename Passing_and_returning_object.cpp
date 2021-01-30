/*
 Name: Shrishti Kumari
 Description: To demonstrate a program to create a class named TIME that stores two time values in hours (float) and minutes (integer). 
              Perform the following operations by using a function add() (1)Add T1+T2 where , T1 and T2 are time objects.
                                                                          (2)Add T1+x where T1 is a TIME object and x is any integer. 
 
 Algorithm:
 
   Algorithm description:This algorithm all about how we implement a program to to create a class named TIME that stores two time values in hours (float) and minutes (integer). 
                         And perform the following operations by using a function add() (1)Add T1+T2 where , T1 and T2 are time objects.
     
     Input Variables: min , hours, Minutes
     Output Variables: function display ()
     
    1.Start
    2.Create a class of name TIME and declare data members and member functions into it and perform all the operations that were asked into it.
    3.In main function()
    4.Declare class TIME object T1, T2,T3
    5.Declare min;
    6.Display "*********************************************"
    7.Display "Enter time 1 details: "
    8.Calling member function of class TIME to perform operations that were asked into it i.e to read data members for T1 object.
    9.T1.read()
      9.1 Display "Hours: "
      9.2 Read hours
      9.3 Display "Minutes: "
      9.4 Read minutes
   10.Display "Time 1 is: "
   11.Calling member function of class TIME to perform operations that were asked into it i.e to display data members for T1 object. 
   12.T1.display()
      12.1 Display hours and minutes
   13 Display "Enter time 2 details: " 
   14.Calling member function of class TIME to perform operations that were asked into it i.e to read data members for T2 object. 
   15.T2.read()
      15.1 Display "Hours: "
      15.2 Read hours
      15.3 Display "Minutes: "
      15.4 Read minutes
   16.Display "Time 2 is: "
   17.Calling member function of class TIME to perform operations that were asked into it i.e to display data members for T2 object.
   18.T2.display()
   19.Display "Enter minutes to add in T1: "
   20.Read min
   21.Display "*********************************************"
   22.T3= T1.ADD(T2) calling member function to perform addition of two class object T1 AND T2.
   23.Display "T1 + T2: "
   24.T3.display() calling member function to display addition of class objects. 
   25.Display "After adding extra minutes: "
   26.T3 = T1.ADD(min) calling member function to perform addition of one class object T1 and integer value.
   27.T3.display() calling member function to display addition of class object and integer value. 
   28.Stop
   
*/

#include<iostream>//Header file
using namespace std;

//Creating class of name TIME
class TIME
{	 	  	 	  	 	   	        	 	
  private://Access specifier
  
        //Data members
        float hours;
        int minutes;
    
    public://Access specifier
    
        //Data members
        void read();
        void display();
    
    //Function overloading
    TIME ADD(int x)
    {
        TIME s(*this);
        s.minutes = minutes+x;//Calculating
        
        //if condition to calculate hours
        if(s.minutes>=60)
        {
            s.hours++;
            s.minutes-=60;
        }
        return s;
    }
    
    //Function overloading
    TIME ADD(TIME T1)
    {
        TIME s(*this);
        s.hours += T1.hours;//Calculating
        s.minutes += T1.minutes;//Calculating
        
        //if condition to calculate hours
        if(s.minutes>=60)
        {	 	  	 	  	 	   	        	 	
            s.hours++;
            s.minutes-=60;
        }
        return s;
    }
    
    //Function overloading
    TIME ()
    {
        hours = minutes =0;
        
    }
    
    //Function overloading
    TIME (const TIME &s1)
    {
        hours = s1.hours;
        minutes = s1.minutes;
    }
    
};

//Defining member function outside the class TIME by using scope resolution.
void TIME::read()
    {
        cout<<"Hours: ";
        cin>>hours;//Reading
        cout<<"Minutes: ";
        cin>>minutes;//Reading
    }

//Defining member function outside the class TIME by using scope resolution.    
void TIME::display()
    {
        cout<<hours<<" hours "<<minutes<<" minutes"<<endl;
    }	 	  	 	  	 	   	        	 	
    
//main function()
int main()
{
    TIME T1, T2,T3;//Declaring class objects
    int min;//Declaring
    
    cout<<"*********************************************\n";
    cout<<"Enter time 1 details: "<<endl; 
    T1.read();//Reading details of T1
    cout<<"Time 1 is: ";
    T1.display();//Displaying details of T1
    
        cout<<"\nEnter time 2 details: "<<endl; 
        T2.read();//Reading details of T2
        cout<<"Time 2 is: ";
        T2.display();//Displaying details of T2
        
    cout<<"\nEnter minutes to add in T1: ";
    cin>>min;//Reading value
    cout<<"\n*********************************************\n";
    
        T3= T1.ADD(T2);//Calling to perform addition of two class objects T1 and T2
        cout<<"T1 + T2: ";
        T3.display();//Calling to display addition of two class objects T1 and T2
        
    cout<<"After adding extra minutes: ";
    T3 = T1.ADD(min);//Calling member function to perform calculation of class object and integer value
    T3.display();//Calling member function to display calculation of class object and integer value
    
    return 0;//As return type is int

}	 	  	 	  	 	   	        	 	

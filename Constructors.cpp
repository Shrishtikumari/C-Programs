
/*
  Name:Shrishti Kumari
  Description: To demonstrate a program to create a class called STRING and implement the following operations. 
               STRING s1=”SMIT” STRING s2=”MAJITAR” STRING s3=s1+s2 by using copy constructor.

   Algorithm:
        
          Algorithm description:This algorithm is all about how we implement a program to create a class called STRING and implement the following operations. 
                                STRING s1=”SMIT” STRING s2=”MAJITAR” STRING s3=s1+s2 by using copy constructor. 
          
          Input Variables:Compile time initialized s1="SMIT"  and s2="MAJITAR"
          Output VariablesL:str
          
    1.Start
    2.Creating a class of name STRING and declaring data members and member function and performing constructors operations.
    3.In main function
    4.Display "******************************************"
    5.Creating object of class STRING s1("SMIT") and Initializing it
      5.1 Calling parameterize constructor
      5.2 STRING(string s)
        5.2.1 str=s
    6.Creating object of class STRING s2("MAJITAR") and Initializing it
      6.1 Calling parameterize constructor
      6.2 STRING(string s)
        6.2.1 str=s
    7.Creating object of class STRING s3
      7.1  Calling default constructor
      7.2 STRING()
        7.2.1 str="" 
    8.Computing s3=s1
    9.Computing s3.n(s2)
      9.1 Calling function n(STRING)
        9.1.1 str=str+" "+s.str
   10.Display "String 1:"
   11.Calling display function to perform operations that were defined in it     
   12.s1.display()
        12.1 Display str
   13.Diaplay "String 2:"
   14.Calling display function to perform operations that were defined in it 
   15.s2.display()
   16 Display "Cancatenated string:"
   17.Calling display function to perform operations that were defined in it      
   18.s3.display()
   19.Display "******************************************"
   20.Stop
   
*/

#include<iostream>//Header file
#include<string.h>//Header file

using namespace std;

class STRING//Creating class of name STRING
{	 	  	 	  	 	   	        	 	
    private://Access specifier
    
            string str;//Data members
            
    public://Access specifier
    
            STRING()//Default constructor
            {
                str="";
            }
            
            STRING(string s)//Parameterize constructor
            {
                str=s;
            }
            
            STRING(const STRING&);//copy constructor
            void n(STRING);//Member function
            void display();//Member function 
};

//Defining copy construction operations
STRING::STRING(const STRING &s)
{
    str=str+s.str;

}

//Defining member function operations
void STRING::n(STRING s)
{
    str=str+" "+s.str;
}

//Defining member function to display all the operations that were asked in it
void STRING::display()
{	 	  	 	  	 	   	        	 	

        cout<<" "<<str<<endl;
}

//main function
int main()
{
    cout<<"\n******************************************\n\n";
    STRING s1("SMIT");//Initializing string 1 value
    STRING s2("MAJITAR");//Initializing string 2 value
    STRING s3;
    
    s3=s1;//computing
    s3.n(s2);//computing
    
        cout<<"String 1:";
        s1.display();//Calling display function to perform operations that were defined in it
        
    cout<<"String 2:";
    s2.display();//Calling display function to perform operations that were defined in it
         
         cout<<"Cancatenated string:";
         s3.display();//Calling display function to perform operations that were defined in it
         
    cout<<"\n******************************************\n";
    return 0;//AS return-type is int
}
	 	  	 	  	 	   	        	 	

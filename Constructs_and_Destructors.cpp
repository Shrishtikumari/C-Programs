
/*
 Name:Shrishti Kumari
 Description: To demonstrate a program to create all types of constructor and destructor for the class and demonstrate sequence of execution of constructors and destructors.

Algorithm:

      Algorithm Description:This algorithm is all about how we implement a program to create all types of constructor and destructor for the class and demonstrate sequence of 
                            execution of constructors and destructors.

      Input Variables:object of class s1 and s2 is initialized
      Output Variables:stu_name[30],Roll_no,Grade
      
    1.Start
    2.Creating a class of name student and declaring data members and member functions.
    3.In main function
    4.Creating a class object student s1
    5.Then default constructor will be called automatically
      5.1 student()
         5.1.1 Display "Default constructor:""
         5.1.2 stu_name="Shrishti"
         5.1.3 Roll_no=25
         5.1.4 Grade=9.5
    6.Calling display function s1.display() to display all the info.
    7.Creating a class object and initializing it student s2("Khushi",3,9.53)
    8.Then parameterized constructor will be called automatically
      8.1 student(string name,int r,float g)
         8.1.1 Display "Parameterize constructor:"
         8.1.2 stu_name=name;
         8.1.3 Roll_no=r
         8.1.4 Grade=g
    9.Calling display function s2.display() to display all the info.
   10.Display "****************************************************"
   11.Diaplay "Copy constructor: "
   12.Display "*Default constructor copy part:"
   13.student s3(s1) copying s1 info into s3 by calling copy constructor.
      13.1 student(string name,int r,float g)
         13.1.1 Display "Parameterize constructor:"
         13.1.2 stu_name=name
         13.1.3 Roll_no=r
         13.1.4 Grade=g
   14.Calling display function s3.display() to display all the info.
   15.Display "*Parameterize constructor copy part:"
   16.student s4(s2) copying s2 info into s4 by calling copy constructor
   17.Calling display function s4.display() to display all the info.
   18.Stop
   
*/

#include <iostream>//Header file
#include<string.h>//Header file

using namespace std;

//Creating class of name student
class student
{	 	  	 	  	 	   	        	 	
  private://Access specifier
  
      //Data members
      string stu_name;
      int Roll_no;
      float Grade;

  public://Access specifier
  
   student()//Default constructor
     {
         cout<<"\nDefault constructor:\n";
         stu_name="Shrishti";
         Roll_no=25;
         Grade=9.5;

     }
     
   student(string name,int r,float g);//Parameterized constructor
   student(const student &s);//Copy constructor
   
   void display()//Member function
     {

         cout<<endl<<"Name:  \t\tRoll no  \t Grades\n";
         cout<<stu_name<<"   \t "<<Roll_no<<" \t \t "<<Grade<<endl;

     }
     
     ~student()//Destructor
     {
         cout<<"\nDestructor is executed.";
     }

};

  //Defining parameterize constructor part to implement all the operations asked in it.
   student::student(string name,int r,float g)
     {	 	  	 	  	 	   	        	 	

         cout<<"\nParameterize constructor:"<<endl;
         stu_name=name;
         Roll_no=r;
         Grade=g;

     }
     
//Defining copy constructor part to implement all the operations asked in it.
   student::student(const student &s)
  {
      //Computing
    stu_name=s.stu_name;
    Roll_no=s.Roll_no;
    Grade=s.Grade;
 }

//main function
int main()
{
    student s1;//Creating class object
    s1.display();//Calling to display

    student s2("Khushi",3,9.53);//Creating class object and initializing it.
    s2.display();
    
    cout<<"\n****************************************************\n";
    cout<<"Copy constructor: ";
    cout<<"\n*Default constructor copy part:\n";
    student s3(s1);//copy constructor is calling
    s3.display();

    cout<<"\n*Parameterize constructor copy part:\n";
    student s4(s2);//copy constructor is calling
    s4.display();

    return 0;//As return-type is int
}	 	  	 	  	 	   	        	 	


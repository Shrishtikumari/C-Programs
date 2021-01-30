

/*
  Name: Shrishti Kumari
  Description: To demonstrate a program to create a class called STUDENT with data members USN, Name and Age. Using inheritance, create the
               classes UGSTUDENT and PGSTUDENT having fields as Semester, Fees and Stipend. Enter the data for at least 5 students. Find the
               semester wise average age for all UG and PG students separately.

  Algorithm:

       Algorithm description: This algorithm is all about how we implement a  program to create a class called STUDENT with data members USN, Name
                              and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields as Semester,Fees and Stipend.
                              Enter the data for at least 5 students. Find the semester wise average age for all UG and PG students separately.

       Input Variables: USN, name, age, fees, semester, stipend
       Output Variables: avg

    1.Stop
    2.Create a base class student which have some data members and member function with public access specifier.
    3.In main function
    4.UGSTUDENT U[10] Creating object of class UGSTUDENT
    5.PGSTUDENT P[10] Creating object of class PGSTUDENT
    6.Declare i,avg;
    7.Display "=====================INHERITENCE========================="
    8.Display "ENTER 5 UG STUDENT INFORMATION:"
    9.Display "==>**Kindly, enter your semester between 1 to 8.**"
   10.Display "**************************************************"
   11.for i<- 1 to 5 otherwise go to step 12
       11.1 Display "================UG STUDENT  i :==================="
       11.2 Calling member function of the class UGSTUDENT
       11.3 U[i].read()
       11.4 Display "**************************************************"
   12.Display "UG Student Semester wise age average:"
   13.for i<- 1 to 8 otherwise go to step
       13.1 Declaring and assigning
       13.2 flag->0,n->0,sum->0
       13.3 for i<- 1 to 5
            13.3.1
                 1.Check if(U[i].semester==sem)
                 2.sum<-sum+U[i].age
                 3.flag->1
                 4.n<-n+1
       13.4 Check if(flag==1)
            13.4.1 avg<-sum/n
            13.4.2 Display "Semester: "  ======>Average: "
   14.Display "================================================================"
   15.Display "ENTER 5 PG STUDENT INFORMATION:"
   16.Display "==>**Kindly, enter your semester between 1 to 8.**"
   17.Display "**************************************************"
   18.for i<- 1 to 5
       18.1 Display "================PG STUDENT  i :==================="
       18.2 Calling member function of the class UGSTUDENT
       18.3 P[i].read()
       18.4 Display "**************************************************"
   19.Display "PG Student Semester wise age average:"
   20.for i<- 1 to 8
       20.1 Declaring and assigning
       20.2 flag->0,n->0,sum->0
       20.3 for i<- 1 to 5
            20.3.1
                 1.Check if(P[i].semester==sem)
                 2.sum<-sum+P[i].age
                 3.flag->1
                 4.n<-n+1
       20.4 Check if(flag==1)
            20.4.1 avg<-sum/n
            20.4.2 Display "Semester: "  ======>Average: "
   21.Stop
   
 INPUTS / OUTPUTS
 
=====================INHERITENCE=========================

ENTER 5 UG STUDENT INFORMATION:
==>**Kindly, enter your semester between 1 to 8.**

**************************************************
================UG STUDENT  1 :===================

=>Enter Name:Shrishti
=>Enter USN no:201900131
=>Enter Age:19
=>Enter Semester:3
=>Enter Fees:4500
=>Enter Stipend:468

**************************************************
================UG STUDENT  2 :===================

=>Enter Name:Khushi
=>Enter USN no:234
=>Enter Age:21
=>Enter Semester:3
=>Enter Fees:56
=>Enter Stipend:245

**************************************************
================UG STUDENT  3 :===================

=>Enter Name:Siya
=>Enter USN no:578
=>Enter Age:22
=>Enter Semester:7
=>Enter Fees:789
=>Enter Stipend:6434

**************************************************
================UG STUDENT  4 :===================

=>Enter Name:Dolly
=>Enter USN no:547
=>Enter Age:25
=>Enter Semester:7
=>Enter Fees:89
=>Enter Stipend:43

**************************************************
================UG STUDENT  5 :===================

=>Enter Name:Diya
=>Enter USN no:67
=>Enter Age:68
=>Enter Semester:5
=>Enter Fees:6788
=>Enter Stipend:4578

**************************************************
UG Student Semester wise age average:

Semester: 3  ======>Average: 20
Semester: 5  ======>Average: 68
Semester: 7  ======>Average: 23.5
================================================================

ENTER 5 PG STUDENT INFORMATION:
==>Kindly, enter your semester between 1 to 8.

**********************************************************
================PG STUDENT  1 :===================

=>Enter Name:Riya
=>Enter USN no:2346
=>Enter Age:27
=>Enter Semester:4
=>Enter Fees:8999
=>Enter Stipend:5789

***************************************************
================PG STUDENT  2 :===================

=>Enter Name:Miya
=>Enter USN no:23467
=>Enter Age:35
=>Enter Semester:4
=>Enter Fees:66778
=>Enter Stipend:899

***************************************************
================PG STUDENT  3 :===================

=>Enter Name:Rahi
=>Enter USN no:5789
=>Enter Age:43
=>Enter Semester:4
=>Enter Fees:6789
=>Enter Stipend:97543

***************************************************
================PG STUDENT  4 :===================

=>Enter Name:Fara
=>Enter USN no:578
=>Enter Age:32
=>Enter Semester:7
=>Enter Fees:57987
=>Enter Stipend:4345

***************************************************
================PG STUDENT  5 :===================

=>Enter Name:Ramu
=>Enter USN no:5676
=>Enter Age:43
=>Enter Semester:7
=>Enter Fees:33445
=>Enter Stipend:67888

***************************************************
PG Student Semester wise age average:

Semester: 4  ======>Average: 35
Semester: 7  ======>Average: 37.5

*/

#include<iostream>//Header file
using namespace std;

//Creating a base class student
class student
{	 	  	 	  	 	   	        	 	
    public://Access specifier

    //Data members
      int USN;
      string name;
      int age;
      void read();//Member function
};

//Creating child class UGSTUDENT which inherits from the base class student whose visibility mode is public
class UGSTUDENT:public student
{
   public://Access specifier

    //Data members
      int semester;
      int fees;
      int stipend;
      void read();//Member function
};

//Creating child class PGSTUDENT which inherits from the base class student whose visibility mode is public
class PGSTUDENT:public student
{
    public://Access specifier

    //Data members
      int semester;
      int fees;
      int stipend;
      void read();//Member function
};

//Definning member function of the base class student to read data
void student::read()
{	 	  	 	  	 	   	        	 	
    cout<<"\n=>Enter Name:";
    cin>>name;//Reading name
    cout<<"=>Enter USN no:";
    cin>>USN;//Reading USN
    cout<<"=>Enter Age:";
    cin>>age;//Reading age
}

//Definning member function of the child class UGSTUDENT and base class student with certain changes in implementation to read data
void UGSTUDENT::read()
{
    student::read();//Calling base class student member function

    //Modifications done
    cout<<"=>Enter Semester:";
    cin>>semester;//Reading semester
    cout<<"=>Enter Fees:";
    cin>>fees;//reading fees
    cout<<"=>Enter Stipend:";
    cin>>stipend;//reading stipend
}

//Definning member function of the child class PGSTUDENT and base class student with certain changes in implementation to read data
void PGSTUDENT::read()
{
    student::read();//Calling base class student member function

    //Modifications done
    cout<<"=>Enter Semester:";
    cin>>semester;//Reading semester
    cout<<"=>Enter Fees:";
    cin>>fees;//reading fees
    cout<<"=>Enter Stipend:";
    cin>>stipend;//reading stipend
}

//Main function
int main()
{	 	  	 	  	 	   	        	 	
    UGSTUDENT U[10];//Creating object of class UGSTUDENT
    PGSTUDENT P[10];//Creating object of class PGSTUDENT
    int i;//Declaring
    float avg;

    cout<<"\n=====================INHERITENCE=========================\n\n";
    cout<<"ENTER 5 UG STUDENT INFORMATION:\n";
    cout<<"==>**Kindly, enter your semester between 1 to 8.**\n";
    
    cout<<"\n**************************************************\n";

    //It will run until i is not greater than 5
    for(i=1;i<=5;i++)
    {
        cout<<"================UG STUDENT  "<<i<<" :===================\n";
        U[i].read();//Calling member function of the class UGSTUDENT
        cout<<"\n**************************************************\n";
    }

    cout<<"UG Student Semester wise age average:\n";

    //Creating to find semester wise average age
    for(int sem=1;sem<=8;sem++)
    {
        //Declaring and initializing
        int flag=0,n=0;
        float sum=0;
        for(i=1;i<=5;i++)
        {
          if(U[i].semester==sem)//If equal
            {
               sum=sum+U[i].age;//Calculating
               flag=1;
               n++;//Incrementing
            }
        }	 	  	 	  	 	   	        	 	

        if(flag==1)
       {
        avg=sum/n;//Computing
        cout<<"\nSemester: "<<sem<<"  ======>Average: "<<avg;//Displaying
       }
    }

    cout<<"\n================================================================\n";

    //Performing operations for the PGSTUDENT class
    cout<<"\nENTER 5 PG STUDENT INFORMATION:\n";
    cout<<"==>Kindly, enter your semester between 1 to 8.\n";
    
    cout<<"\n**********************************************************\n";

    //It will run until i will not become greater than 5
    for(i=1;i<=5;i++)
    {
        cout<<"================PG STUDENT  "<<i<<" :===================\n";
        P[i].read();//Calling member function of class PGSTUDENT
        cout<<"\n***************************************************\n";
    }

    cout<<"PG Student Semester wise age average:\n";
    for(int sem=1;sem<=8;sem++)
    {
        //Declaring and initializing
        int flag=0,n=0;
        float sum=0;
        for(i=1;i<=5;i++)
        {
           if(P[i].semester==sem)//If equal
            {
               sum=sum+P[i].age;//calculating sum
               flag=1;
               n++;//incrementing
            }	 	  	 	  	 	   	        	 	
        }

        if(flag==1)
       {
        avg=sum/n;//calculating
        cout<<"\nSemester: "<<sem<<"  ======>Average: "<<avg;//Displaying
       }
    }
     return 0;//As return type is int
}

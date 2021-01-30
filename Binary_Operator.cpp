/*
    Name:Shrishti Kumari
    Description: To demonstrate a program to implement a C++ program to create a class called DATE. Accept two valid dates in the form dd/mm/yy.
                 Implement the following operations by overloading the operators  -.
                 i) no_of_days=d1-d2; where d1 and d2 are DATE objects. d1>=d2 and no_of_days is an integer.
                ii) d2=d1-no_of_days; where d1 is a DATE object and no_of_days is an integer.


    Algorithm:

        Algorithm description: This algorithm is all about how we implement a C++ program to create a class called DATE. Accept two valid dates
                               in the form dd/mm/yy. Implement the following operations by overloading the operators  -.
                               i) no_of_days=d1-d2; where d1 and d2 are DATE objects. d1>=d2 and no_of_days is an integer.
                              ii) d2=d1-no_of_days; where d1 is a DATE object and no_of_days is an integer.

        Input Variables: n,t,day,m,year
        Output Variables:Functions were giving the output.

   1.Start
   2.Create a class of name DATE which include data members and member functions to perform tasks.
   3.In main function
   4.Display "=======PROGRAM TO IMPLEMENT BINARY OPERATOR  '-' CONCEPT======="
   5.Declare result,n,t,s=0
   6.Declare DATE d1,d2
   7.Display "*********************************************************************"
   8.Display "Enter DATE 1 info:"
   9.Calling member function to perform all the operations that were asked in it.
  10.s=d1.read()
     1.Display "=>Date:"
     2.Read day
     3.Display "=>Month:"
     4.Read m
     5.Display "=>Year:"
     6.Read year
     7.Check if((m==2) && (day>29)) then return 1 otherwise go to next step
     8.Check if((m>12)||(day>31)) then return 1 otherwise go to next step
     9.Check if((m==4||m==6||m==9||m==11) && (day>30)) then return 1 otherwise go to next step
    10.Check if((year%4)!=0 && (m==2) && (day>28)) then return 1 otherwise go to next step
  11.Display "Enter DATE 2 info:"
  12.Calling member function to perform all the operations that were asked in it.
  13.s=d2.read()
  14.Calling member function to perform all the operations that were asked in it.
  15.result=d1-d2
  16.Display result
  17.Display "*********************************************************************"
  18.Check if(s==1)
     18.1.Display "=>Wrong Inputs were choosen by you."
     18.2.Display "=>Do you want to continue with wrong result(if yes: press 1 / if not: press 0):"
     18.3.Read t
     18.4.Check if(t==0) then exit otherwise continue
     18.5.Else part check if(result<0) otherwise go to step 18.6
        1.Display "Negative result is there."
        2.Display "=>Wrong input has been taken by you."
        3.Dispaly "=>As first date should be greater than second date."
        4.Display "Do you want to continue with wrong result(if yes: press 1 / if not: press 0):"
        5.Read t
        6.Check if(t==0) then exit otherwise continue
 19.Display "Enter the no of days you want to subtract:"
 20.Read n
 21.Calling member function to perform all the operations that were asked in it.
 22.d2=d1-n
 23.Stop

INPUTS / OUTPUTS
=======PROGRAM TO IMPLEMENT BINARY OPERATOR  '-' CONCEPT=======

*********************************************************************
Enter DATE 1 info:
=>Date:24
=>Month:3
=>Year:2020

Enter DATE 2 info:
=>Date:27
=>Month:4
=>Year:2019

Total number of days between these are = 331

*********************************************************************

Enter the no of days you want to subtract:3
New date:21/3/2020

*/


#include<iostream>//Header file

using namespace std;

//Creating class which includes data members and member fubctions
class DATE
{	 	  	 	  	 	   	        	 	
  private://Access specifier

    //Data members
     int m,day,year;

  public://Access specifier

      //Member functions
      int read();
      int operator -(DATE);
      DATE operator -(int);
};

//Definning member function to read data
int DATE::read()
{
     cout<<"=>Date:";
     cin>>day;//Reading
     cout<<"=>Month:";
     cin>>m;//Reading
     cout<<"=>Year:";
     cin>>year;//Reading

     //CHECKING process is been done
     if((m==2) && (day>29))
     {
       return 1;//returning
     }
     if((m>12)||(day>31))
     {
       return 1;//returning
     }
     if((m==4||m==6||m==9||m==11) && (day>30))
     {
         return 1;//returning
     }	 	  	 	  	 	   	        	 	
     if((year%4)!=0 && (m==2) && (day>28))
     {
       return 1;//returning
     }
}

//Definning member function to perform all the operations that were asked in it.
int DATE::operator -(DATE d2)
{
  //Declaring

  int i,c1,c2,nody,c,No_days,y;
  c1=c2=c=0;

  //Checking all the conditions
  for(i=1;i<m;i++)
  {
     if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
     {
         c1=c1+30;//Computing
     }
     else if(i==2)
     {
         c1=c1+28;//Computing
     }
     else
     {
         c1=c1+30;//Computing
     }
 }
 c1=c1+day;//Computing

 for(i=1;i<d2.m;i++)
 {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        {	 	  	 	  	 	   	        	 	
            c2=c2+31;//Computing
        }
        else if(i==2)
        {
            c2=c2+28;//Computing
        }
        else
        {
            c2=c2+30;//Computing
        }
 }

 c2+=d2.day;
 nody=(year-d2.year)*365;

     for(i=d2.year;i<year;i++)
     {
         if((i%4)==0)
         {
             c++;//Computing
         }
     }
 y=year-d2.year;
     while(y>400)
     {
       c++;//Computing
       y=y-400;
     }

     if((m>2) && (year%4)==0)
      {
          c++;//Computing
      }
     if((d2.m>2) && (d2.year%4)==0)
      {
          c--;//Computing
      }	 	  	 	  	 	   	        	 	

 No_days=nody+c1-c2+c;

     if(No_days>0)
     {
       cout<<"\nTotal number of days between these are = ";
       return(No_days);//returning
     }
     else
     {
         cout<<"\nTotal number of days between these are = ";
         return(No_days);//returning
     }
}

//Definning member function to perform all the operations that were asked in it.
DATE DATE::operator -(int d)
{
  DATE d3;//Declare

    //Checking all the procedures
     while(d>365)
     {
         //Computing and assigning
         year++;
         d=d+365;
     }

     while(d>30)
     {
         if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
         {
           //Computing and assigning
           d+=31;
           m--;//Incrementing
         }	 	  	 	  	 	   	        	 	
         else if(m==2)
         {
           //Computing and assigning
           d+=28;
           m--;//Incrementing
         }
         else
         {
           //Computing and assigning
           d+=30;
           m--;//Incrementing
         }

         if(m>12)
         {
           //Computing and assigning
           year++;
           m=1;//Incrementing
         }
     }

 day=day-d;//Computing and assigning

    //Checking procedures have been done
     if(day>30)
     {
        if(m==4||m==6||m==9||m==11)
        {
          m--;//Incrementing
          day+=30;
        }
         else if(m==2)
         {
           m--;//Incrementing
           day+=28;
         }	 	  	 	  	 	   	        	 	
         else if(day>31)
         {
           m--;//Incrementing
           day+=31;
         }
         if(m>12)
         {
           year--;//Incrementing
           m=1;
         }
     }

 //Computing
 d3.m=m;
 d3.day=day;
 d3.year=year;
 cout<<"New date:";
 cout<<day<<"/"<<m<<"/"<<year<<endl;//Display
 return(d3);
}

//main function
int main()
{
     cout<<"\n=======PROGRAM TO IMPLEMENT BINARY OPERATOR  '-' CONCEPT=======\n";
     int result,n,t,s=0;//Declare
     DATE d1,d2;//Declare
     cout<<"\n*********************************************************************\n";
     cout<<"Enter DATE 1 info:\n";
     s=d1.read();//Calling member function to perform all the operations that were asked in it.
     cout<<"\nEnter DATE 2 info:\n";
     s=d2.read();
     result=d1-d2;//Calling member function to perform all the operations that were asked in it.
     cout<<result<<endl;
     cout<<"\n*********************************************************************\n";

    //Checking the conditions.
     if(s==1)
     {	 	  	 	  	 	   	        	 	
         cout<<"\n=>Wrong Inputs were choosen by you.\n";
         cout<<"=>Do you want to continue with wrong result(if yes: press 1 / if not: press 0):";
         cin>>t;
         if(t==0)
          {
            exit(0);//Returning
          }
     }
     else if(result<0)
     {
       cout<<"\nNegative result is there.\n";
       cout<<"=>Wrong input has been taken by you.";
       cout<<"\n=>As first date should be greater than second date.\n";
       cout<<"Do you want to continue with wrong result(if yes: press 1 / if not: press 0):";
       cin>>t;
       if(t==0)
       {
           exit(0);//Returning
       }
     }

 cout<<"\nEnter the no of days you want to subtract:";
 cin>>n;//Reading
 d2=d1-n;//Calling member function to perform all the operations that were asked in it.
 return 0;//As return type is int.
}
	 	  	 	  	 	   	        	 	

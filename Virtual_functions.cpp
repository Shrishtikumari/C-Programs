/*
  Name: Shrishti Kumari
  Description: To demonstrate a program to implement a base class convert with two data members val1 and val2 and two member functions getinit()
               and getconvert() which return the initial values and converted values.It includes a pure virtual function compute() which must 
               be defined by by two derived classes lit_to_gal and far_to_cel. Each of these class have their own definition of compute().
  

  Algorithm:
    
        Algorithm description: This algorithm is all about how we implement a base class convert with two data members val1 and val2 and two member 
                               functions getinit() and getconvert() which return the initial values and converted values.It includes a pure virtual 
                               function compute() which must be defined by by two derived classes lit_to_gal and far_to_cel. Each of these class
                                have their own definition of compute().


        Input Variables: t,n
        Output Variables: functions were giving the output.
        
    1.Start
    2.Create a class name as convert which includes data members and member functions.
    3.In main function
    4.Display "============CONCEPT OF VIRTUAL FUNCTION============"
    5.Declare n,t
    6.Declare object of class convert *c
    7.Dispalay "=>Enter a number to convert it from Litre to Galoons: "
    8.Read n
    9.Calling member function to perform all the task that were asked in it.
   10.lit_to_gal l(n)
       10.1 val2<- val1/3.7854
   11.Display "=>Enter a number to convert it from Farenheit to Celsius: "
   12.Read t
   13.Calling member function to perform all the task that were asked in it.
   14.far_to_cel f(t)
       14.1 val2<- (val1-32) / 1.8
   15.c<- &l
   16.Display "==============CONVERTED VALUES==============="
   17.Display "Litre: " and calling function to display c->getinit()
   18.c->compute()
   19.Dispaly "=>Galoon: " and calling function to display converted value c->getconvert()
   20.c<- &f
   21.Display "Farenheit: " and calling function to display c->getinit()
   22.c->compute()
   23.Dispaly "=>Celsius: " and calling function to display converted value c->getconvert()
   24.Stop

INPUTS / OUTPUTS
============CONCEPT OF VIRTUAL FUNCTION============

=>Enter a number to convert it from Litre to Galoons: 34

=>Enter a number to convert it from Farenheit to Celsius: 300

==============CONVERTED VALUES===============

Litre: 34
=>Galoon: 8.98188

Farenheit: 300
=>Celsius: 148.889

*/

#include <iostream>//Header file

using namespace std;

//Creating class of name convert
class convert
{	 	  	 	  	 	   	        	 	
    protected://Access specifier
        
        //Data mmebers
        double val1;
        double val2;

    public://Access specifier
      
        //Member function
        convert(double i)
        {
            val1 = i;//Initializing
        }
    double getconvert()
    {
        return val2;//returning
    }
    double getinit()
    {
        return val1;//returning initial value
    }
    virtual void compute() = 0;
};

//Creating and definning derived class object which inherit from base class convert
class lit_to_gal : public convert
  {
    public:
        lit_to_gal(double i) : convert(i){}

    //RE-DEFINNING
    void compute()
    {
        val2 = val1/3.7854;
    }
  };

//Creating and definning derived class object which inherit from base class convert
class far_to_cel : public convert
 {	 	  	 	  	 	   	        	 	
    public:
        far_to_cel(double i) : convert(i){}

    //RE-DEFINNING
    void compute()
    {
    val2 = (val1-32) / 1.8;//Computing
    }
 };

 //Main function
int main()
{
    cout<<"\n============CONCEPT OF VIRTUAL FUNCTION============\n";
    int n,t;//Declare
    convert *c;//Creating object
    
    cout<<"\n=>Enter a number to convert it from Litre to Galoons: ";
    cin>>n;
    lit_to_gal l(n);//Calling member function to perform all the task that were asked in it.
    
    cout<<"\n=>Enter a number to convert it from Farenheit to Celsius: ";
    cin>>t;//Reading
    far_to_cel f(t);//Calling member function to perform all the task that were asked in it.
    
    c = &l;//Assigning
    cout<<"\n==============CONVERTED VALUES===============\n";
    cout<<"\nLitre: "<<c->getinit()<<endl;
    c->compute();//Calling member function to perform all the task that were asked in it.
    cout<<"=>Galoon: "<<c->getconvert()<<endl;
    
    c = &f;
    cout<<"\nFarenheit: "<<c->getinit()<<endl;
    c->compute();//Calling member function to perform all the task that were asked in it.
    cout<<"=>Celsius: "<<c->getconvert()<<endl;
    return 0;//As return type is int.
}	 	  	 	  	 	   	        	 	

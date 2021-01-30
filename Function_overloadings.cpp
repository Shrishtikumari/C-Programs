/*
   Name:Shrishti Kumari
   Description: To demonstrate a program to implement the following by overloading functions ADD() that return a COMPLEX number. 
   
   Algorithm:
   
     Algorithm description: This algorithm is about how to implement the following by overloading functions ADD() that return a COMPLEX number where 
                            ADD(a, s2)- where a is an integer (real part) and s2 is a complex number. ADD(s1, s2)- where s1 and s2 are complex numbers.
     
     Input Variables:real_no, imaginary_no,a
     Output Variables: function display()
     
    1.Start
    2.We declare a class name COMPLEX and declare data members and member functions into it and perform all the operation involved into it when asked.
    3.In main function() 
    4.Declaring class COMPLEX object C1,C2,C3
    5.Declare  a
    6.Display "**********************************************************************"
    7.Display "Enter details of first complex number. "
    8.Calling member function of class COMPLEX to perform opereration that were asked into it i.e,to read the data members.
    9.C1.read()
      9.1 Display "Enter real part: "
      9.2 Read real_no
      9.3 Display "Enter imaginary part: "
      9.4 Read imaginary_no
    10.Display "Complex no 1:"
    11.Calling member function of class COMPLEX to perform opereration that were asked into it i.e, to display element.
    12.C1.display()
      12.1 Display real_no "+i" imaginary_no      
    13.Display "Enter details of  second complex number. "
    14.Calling member function of class COMPLEX to perform opereration that were asked into it i.e,to read the data members.
    15.C2.read()
      15.1 Display "Enter real part: "
      15.2 Read real_no
      15.3 Display "Enter imaginary part: "
      15.4 Read imaginary_no
    16.Display "Complex no 2:"
    17.Calling member function of class COMPLEX to perform opereration that were asked into it i.e, to display element.
    18.C2.display()
      18.1 Display real_no "+i" imaginary_no
    19.Display "Enter integer value : "
    20.Read a
    21.Display "************************************************************************"
    22.Display "Sum of s1+s2:"
    23.Calling member function of class COMPLEX to perform opereration that were asked into it i.e, to perform addition of two complex no.
    24.C3.ADD(C1,C2) this will call function ADD(COMPLEX s1, COMPLEX s2) and perform certain operations
      24.1 real_no =s1.real_no + s2.real_no
      24.2 imaginary_no =s1.imaginary_no + s2.imaginary_no
    25.C3.display() calling to display sum
    26.Display "Sum of integer value with real part of complex s2 and then complex no is:"
    27.Calling member function of class COMPLEX to perform opereration that were asked into it 
    28.C3.ADD(a,C2) this will call function ADD(int a, COMPLEX s2) because a is integer.
      28.1 real_no=a+s2.real_no
      28.2 imaginary_no=s2.imaginary_no
    29.Calling member function of class COMPLEX to perform opereration that were asked into it i.e, to display element.
    30.C3.display()
    31.Stop

*/


#include <iostream>//Header file
using namespace std;

//Creating class
class COMPLEX
{	 	  	 	  	 	   	        	 	
    private://Access specifier
    
        //Data members
        int real_no;
        int imaginary_no;
        
    public://Access specifier
    
        //Member function
         void read();
         void display();
    
    //This overloading function will work when call function will have class object in their argument list
    void ADD(COMPLEX s1, COMPLEX s2)
    {
        //Calculation
        real_no =s1.real_no + s2.real_no;
        imaginary_no =s1.imaginary_no + s2.imaginary_no;
    }
    
    //This overloading function will work when call function will have class object and integer value in their argument list.
    void ADD(int a, COMPLEX s2)
    {
        //Calculation
        real_no=a+s2.real_no;
        imaginary_no=s2.imaginary_no;
    }
    
};
    
    //Defing member function outside the class using scope resolution to read data members.
    void COMPLEX::read()
    {
        cout<<"Enter real part: ";
        cin>>real_no;
        cout<<"Enter imaginary part: ";
        cin>>imaginary_no;
        
    }	 	  	 	  	 	   	        	 	
    
    //Defing member function outside the class using scope resolution to display data members.
    void COMPLEX::display()
    {
        cout<<real_no<< " + i "<<imaginary_no<<endl;
    }

//Main function
 int main()
  {
    COMPLEX C1,C2,C3;//Declaring class object
    int a;//Declaring
    
    cout<<"**********************************************************************\n";
    cout<<"\nEnter details of first complex number. "<<endl;
    C1.read();//To read data members for C2
    cout<<"Complex no 1:"<<endl;
    C1.display();//To display data members 
    
        cout<<"\nEnter details of  second complex number. "<<endl;
        C2.read();//To read data members for C2
        cout<<"Complex no 2:"<<endl;
        C2.display();//To display data members 
    
    cout<<"\nEnter integer value : ";
    cin>>a;//Reading integer
    cout<<"**********************************************************************\n";
       
        cout<<"Sum of s1+s2:"<<endl;
        C3.ADD(C1,C2);//Calling overloading function having class objects in their argument list.
        C3.display();//To display after addition
        
    cout<<"Sum of integer value with real part of complex s2 and then complex no is:"<<endl;
    C3.ADD(a,C2);//Calling overloadiing function having class object and integer in their argument list.
    C3.display();//To display after addition
    
    return 0;//As return type is int.
}	 	  	 	  	 	   	        	 	

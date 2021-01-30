
/*

 Name:Shrishti Kumari
 Registration no:201900131
 Date & Time:25/08/2020 & 1:30 PM
 
 Description:To demonstrate a program to prepare  a  student  Record  using  class  and  object.
 
            Input Variables:Name,Reg_no,Phy,Chem,Maths
            Output Variables:avg
 
 
*/

#include<iostream>
using namespace std;

class Student//Class name
{
    private://Access specifier
    
    //Data members of the class
        string Name;
        int Reg_no;
        float Phy;
        float Chem;
        float Maths;
        float avg;
        
    public://Access specifier
    
    //Member functions
        void read();//To read the following info that were aksed in this question
        void average_marks();//To calculate the average of three subjects
        void display();//To display the average and other details
};

//Defining the member function 
void Student::read()
{	 	  	 	  	 	   	        	 	
    cout<<"Enter name:";
    cin>>Name;
    
        cout<<"Registration no:";
        cin>>Reg_no;
        
    cout<<"Enter your marks:"<<endl;
    
    cout<<"Phy=";
    cin>>Phy;
            
        cout<<"Chem=";
        cin>>Chem;
    
    cout<<"Maths=";
    cin>>Maths;
}

//Defining member function to calculate average of three subjects
void Student::average_marks()
{
    avg=(Phy+ Chem + Maths)/3;
}

//Defining member function to display average and other information
void Student::display()
{

    cout<<endl<<"STUDENT DETAILS ARE AS FOLLOWS:"<<endl;
    cout<<"Name:"<<Name<<endl;
        
        cout<<"Registration no:"<<Reg_no<<endl;
        cout<<endl<<"MARKS:"<<endl;
        
    cout<<"Physics= "<<Phy<<endl;
    cout<<"Chemistry= "<<Chem<<endl;
    
        cout<<"Mathematics= "<<Maths<<endl;
        cout<<"Average="<<avg<<"%"<<endl;
}	 	  	 	  	 	   	        	 	
 
int main()
{
    cout<<"--------HERE WE WILL READ INFO OF 4 STUDENTS:---------"<<endl;
    
    //Declaring multiple objects
    
    Student s1;//Object 1
    cout<<" Enter student1 info:"<<endl;
    s1.read();//To read info
    s1.average_marks();
    cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;//After this we will display all the info which was asked ad we have given
    s1.display();
    
                cout<<"*********************************************************"<<endl;
                Student s2;//Object 2
                cout<<" Enter student2 info"<<endl;
                s2.read();
                s2.average_marks();
                cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
                s2.display();//To display all the info
    
    cout<<"*********************************************************"<<endl;
    Student s3;//Object 3
    cout<<" Enter student3 info:"<<endl;
    s3.read();
    s3.average_marks();
    cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    s3.display();
   
   
                cout<<"*********************************************************"<<endl;
                Student s4;//Object 4
                cout<<"  Enter student4 info:"<<endl;
                s4.read();
                s4.average_marks();
                cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
                s4.display();
   
    return 0;
}	 	  	 	  	 	   	        	 	

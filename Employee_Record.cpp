
/*
      Name:Shrishti Kumari
      
      Description:To demonstrate a program to make a Employee record without using array of object.
                  Given DA=  52%  of  Basic  and  Income  Tax(IT)=30%  of  the  gross salary
        
        
           Input Variables:Employee_Name, Employee_Number,Basic,DA,IT
           Output Variables: Net_sal
      
*/

#include<iostream>
using namespace std;

class Employee//class name
{
    private://Access specifier
    
    //Data members
         string Employee_Name;
         int Employee_Number;
         float Basic;
         float DA;
         float IT;
         float Net_sal;
         
         
    public://Access specifier
    
    //Member functions
          void read();//To read the following info
          void cal_Net_salary();//For calculation of net salary and other 
          void data_member();// For printing data members info
};

//Defining member function outside the class 
void Employee::read()
{	 	  	 	  	 	   	        	 	
    cout<<"Employee Name:";
    cin>>Employee_Name;//Reading employee name
    
        cout<<"Employee no:";
        cin>>Employee_Number;//Reading employee number
        
    cout<<"Basic salary:";
    cin>>Basic;//Reading basic salary
}

//To do calculation of NET SALARY and other using scope resolution to define member function outside
void Employee::cal_Net_salary()
{
    //initialization
    DA = Basic*52/100;
    IT= ((Basic+DA)*30/100);
    Net_sal =((Basic + DA)-IT);

}

//Displaying data members info:
void Employee::data_member()
{
    cout<<"NAME:"<<Employee_Name<<endl;
    cout<<"No:"<<Employee_Number<<endl;
        
        cout<<"Basic salary:"<<Basic<<endl;
        cout<<"DA:"<<DA<<endl;
        
    
    cout<<"Income tax:"<<IT<<endl;
     cout<<"Net Salary:"<<Net_sal<<endl;
}

int main()
{	 	  	 	  	 	   	        	 	
    cout<<"----HERE WE ARE FOING TO READ AND DISPLAY 3 EMPLOYEE INFO:----"<<endl;
    Employee e1;//Declaring first object
    cout<<"Enter employee 1 details:"<<endl;
    e1.read();//To read employees info
    e1.cal_Net_salary();
    cout<<endl<<"-----------------------------------"<<endl;
    
    cout<<"EMPLOYEE DETAILS:"<<endl;//Displaying all the info which were asked
    e1.data_member();
    
            cout<<endl<<"*********************************************************"<<endl;//Given because to read other object info
            
            cout<<"Enter employee 2 details:"<<endl;
            Employee e2;//Declaring second object
            e2.read();
            e2.cal_Net_salary();//Calculation that was given in question
            cout<<endl<<"----------------------------------"<<endl;
            
            cout<<"EMPLOYEE DETAILS:"<<endl;
            e2.data_member();//Displaying of data members
    
    cout<<endl<<"*********************************************************"<<endl;
    
    cout<<"Enter employee 3 details:"<<endl;
    Employee e3;//Declaring third object
    e3.read();//o read the info of 3rd employee
    e3.cal_Net_salary();
    cout<<endl<<"----------------------------------"<<endl;//This will show before printing the info
    
    cout<<"EMPLOYEE DETAILS:"<<endl;
    e3.data_member();
    
    
    return 0;
}	 	  	 	  	 	   	        	 	

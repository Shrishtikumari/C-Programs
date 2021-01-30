
/*
  Name: Shrishti Kumari
  Description: To demonstrate a program to create a file named “costs” and implement the following by creating menu driven program:-
               i. The file should contain two columns “item_name” and “cost”.
               ii. Insert data under these two columns assuming the file is empty initially.
               iii. Allow user to add more data as and when he wants.
               iv. Retrieve the item details if item name is given as an input.
               v. Display the entire content of the file.


  Algorithm:
  
          Algorithm description: This algorithm is all about how we create a file named “costs” and implement the following by creating 
                                 menu driven program:-
                                 i. The file should contain two columns “item_name” and “cost”.
                                 ii. Insert data under these two columns assuming the file is empty initially.
                                 iii. Allow user to add more data as and when he wants.
                                 iv. Retrieve the item details if item name is given as an input.
                                 v. Display the entire content of the file. 
                                 
         Input Variables: choice, n, item_name[30],cost,item
         Output Variables: line[size] 

    1.Start
    2.In main function
    3.Declare choice,t,i,cost
    4.Declare size=90
    5.Declare item_name[20],line[size]
    6.Declare n,item
    7.Display "==============IMPLEMENTING FILE HANDLING=============="
    8.ofstream outfile
    9.outfile.open("cost.txt",ios::out) //Opening the file
   10.Display "Enter following information:"
   11.Display "=>Item:"
   12.Read item_name
   13.Insert in the file outfile<<item_name
   14.Display "=>Cost:"
   15.Read cost
   16.Insert in the file outfile<<cost
   17.count<-count+1
   18.outfile.close()
   19.while(1)
   20.Display "==============IMPLEMENTING FILE HANDLING=============="
   21.Display "*****************************************************"
   22.Display "MENU:"
   23.Display "1.To Add data."
   24.Display "2.To Search data."
   25.Display "3.To Display."
   26.Display "4.To Exit"
   27.Display "*****************************************************"
   28.Display "Enter your choice:"
   29.Read choice
   30.Constructing switch case which will work according users choice
   31.switch (choice)
      31.1 case 1:
                  1.while(1)
                  2.In while loop
                  3.ofstream outfile
                  4.outfile.open("cost.txt",ios::out) //Opening the file
                  5.Display "Enter following information:"
                  6.Display "=>Item:"
                  7.Read item_name
                  8.Insert in the file outfile<<item_name
                  9.Display "=>Cost:"
                 10.Read cost
                 11.Insert in the file outfile<<cost
                 12.count<-count+1
                 13.Display "Do you want to add more data(if Yes =Press 1 / If No=Press 0):"
                 14.Read t
                 15.Check if(t==0) otherwise continue
                    15.1 outfile.close() //Closing the file
                    15.2 break
                 16.break
                 
      31.2 case 2:
                  1.ifstream infile //Opening file to read
                  2.Declare  s,flag=0
                  3.infile.open("cost.txt",ios::in)
                  4.Display "Enter item name to search:"
                  5.Read item
                  6.Check if(infile.is_open()) oherwise go to else part
                    6.1 while(!infile.eof())
                        6.1.1 getline(infile,n)
                        6.1.2 if((s=n.find(item,0))!=string::npos)
                              1.Display "Items  Cost "
                              2.Display "----------     -----------"
                              3.Display item
                              4.getline(infile,n)
                              5.Display cost
                              6.flag<-flag+1
                    6.2 infile.close() //Closing the file
                  7.Check if(flag!=1) otherwise go to step 8.
                    7.1 Display "=>No such item is founded in the list."
                  8.break
                  
      31.3 case 3:
                 1.ifstream infile
                 2.infile.open("cost.txt",ios::in)
                 3."Items  Cost "
                 4.for i<-0 to count-1
                   4.1 infile.getline(line,size)
                   4.2 Display item_name
                   4.3 infile.getline(line,size)
                   4.4 Display cost
                   4.5 Display line
                   4.6 infile.close() //Closing the file
                 5.break

      31.4 case 4:
                  1.Display "EXITING!!!"
                  2.exit(0)

      31.5 default:
                  1.Display "=>You have entered wrong option."
                  2.Display "=>Do you want to continue(if Yes =Press 1 / If No=Press 0):"
                  3.Read t
                  4.Check if(t==0) otherwise continue
                    4.1 exit(0)
                  
*/

#include <iostream>//Header files
#include <fstream>//Header file for file handling
#include<string.h>

using namespace std;

static int count=0;//As it will not start from starting.

//Main function
int main()
{	 	  	 	  	 	   	        	 	
    //Declaration and initialization
    int choice,t,i,cost;
    const int size=90;
    char item_name[20],line[size];
    string n,item;

    cout<<"\n==============IMPLEMENTING FILE HANDLING==============\n";

    ofstream outfile;//Opening the file to write
    outfile.open("cost.txt",ios::out);//Opening the file

    cout<<"\nEnter following information:\n";
    cout<<"=>Item:";
    cin>>item_name;//Reading item name
    outfile<<item_name<<endl;
    cout<<"=>Cost:";
    cin>>cost;//Reading cost
    outfile<<cost<<endl;

    count++;//Incrementing static variable by 1
    outfile.close();//Closing the file after adding data in the vaccant list.

    //Constructing while loop it will run infinitely till the time u will not terminate it.
    while(1)
    {
        cout<<"\n==============IMPLEMENTING FILE HANDLING==============\n";
        cout<<"\n*****************************************************";
        cout<<"\nMENU:\n";
        cout<<"1.To Add data.\n";
        cout<<"2.To Search data.\n";
        cout<<"3.To Display.\n";
        cout<<"4.To Exit\n";
        cout<<"*****************************************************\n\n";
        cout<<"Enter your choice:";
        cin>>choice;//Reading user choice

        //Constructing switch case which will work according users choice
        switch (choice)
        {	 	  	 	  	 	   	        	 	
          case 1:
                {
                 //Constructing switch case which will work according users choice
                 while(1)
                    {
                      ofstream outfile;//Opening the file to write
                      outfile.open("cost.txt",ios::app);

                      cout<<"\nEnter following information:\n";
                      cout<<"=>Item:";
                      cin>>item_name;//Reading item name
                      outfile<<item_name<<endl;
                      cout<<"=>Cost:";
                      cin>>cost;//Reading cost
                      outfile<<cost<<endl;

                      count++;//Incrementing it.

                      cout<<"\nDo you want to add more data(if Yes =Press 1 / If No=Press 0):";
                      cin>>t;//Reading ur choice

                       if(t==0)
                        {
                            outfile.close();//Closing the file
                            break;//Terminating out of the loop
                        }
                     }
                 }
                     break;//Terminating out of the loop

           case 2:
                 {
                      ifstream infile;//Opening file to read
                      int s,flag=0;//Declaring and initializing

                      infile.open("cost.txt",ios::in);
                      cout<<"\nEnter item name to search:";
                      cin>>item;//Reading user choice for search

                      if(infile.is_open())
                        {	 	  	 	  	 	   	        	 	
                            while(!infile.eof())//EOF stands for end of function
                            {
                                getline(infile,n);
                                if((s=n.find(item,0))!=string::npos)
                                    {
                                       cout<<"\n\nItems \t\t Cost \n";
                                       cout<<"----------     -----------\n";
                                       cout<<item;//Displaying searched item
                                       getline(infile,n);
                                       cout<<"\t\t"<<n;//Displaying it's cost
                                       flag=1;//Assigning

                                    }
                            }
                          infile.close();//Closing the file
                         }

                     if(flag!=1)//If it is 0
                     {
                         cout<<"=>No such item is founded in the list.\n";
                     }
                 }
                     break;//Terminating out of the loop

           case 3:
                  {
                      ifstream infile;
                      infile.open("cost.txt",ios::in);//Opening file to read
                      cout<<"\n\nItems \t\t Cost \n";

                      for(i=0;i<count;i++)//Until count-1
                       {
                          infile.getline(line,size);
                          cout<<line;//Display item name
                          infile.getline(line,size);
                          cout<<"\t\t"<<line;//Display cost
                          cout<<"\n";
                        }	 	  	 	  	 	   	        	 	
                       infile.close();//Closing the file
                 }
                break;//Terminating out of the loop

           case 4:
                  cout<<"\nEXITING!!!\n";
                  exit(0);//Terminating out of the program

           default :
                  cout<<"\n=>You have entered wrong option.\n";
                  cout<<"\n=>Do you want to continue(if Yes =Press 1 / If No=Press 0):";
                  cin>>t;//Reading users choice
                  if(t==0)
                  {
                      exit(0);//Terminating out of the program
                  }
          }
    }
    return 0;//As return type is int.
}

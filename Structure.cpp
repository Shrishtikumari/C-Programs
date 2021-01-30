
#include<iostream>
#include<string.h>

using namespace std;

struct cricket
{
    char player_name[30];
    char team_name[30];
    float bat_average;
};

int i,j,n=5;
int main()
{
    struct  cricket arr[5],a;
    float avg;
    int res;
    cout<<"Enter details of  "<<n<<"  elements:\n";
    
        for(i=0;i<n;i++)
        {
            cout<<"Enter details of  "<<i+1<<"  players:\n";
            
            cout<<"Player name:";
            cin>>arr[i].player_name;
            
            cout<<"Team name:";
            cin>>arr[i].team_name;
            
            cout<<"Batting average:";
            cin>>avg;
           
              arr[i].bat_average=avg;
        }
        
        for(i=1;i<=n-1;i++)
        {	 	  	 	  	 	   	        	 	
            for(j=0;j<=n-i;j++)
            {
                res=strcmp(arr[j-1].team_name,arr[j].team_name);
                
                 if(res>0)
                 {
                     a=arr[j-1];
                     arr[j-1]=arr[j];
                     arr[j]=a;
                 }
            }
        }
        
        cout<<"After sorting in team-wise manner:\n";
        
            for(i=0;i<n;i++)
            {
                cout<<arr[i].player_name<<"\t"<<arr[i].team_name<<"\t"<<arr[i].bat_average<<'\n';
            }
}

            

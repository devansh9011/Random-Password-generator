#include<iostream>
#include<set>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	set<char> lower={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',  
                     'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 
                     'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 
                     'z'};
    set<char> upper={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',  
                     'I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q', 
                     'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 
                     'Z'};
    set<char> number={'0','1', '2', '3', '4', '5', '6', '7',
    				  '8','9'};
    set<char> symbol={'!','@', '#', '$', '%', '^', '&', '*'};

    cout<<"\nDo you want to include symbols(y/n) : ";
    int rn;
    label:
    char choice;	//move above the label or not
    cin>>choice;
    if(choice=='Y'||choice=='y')
    	rn=4;
    else
    	if(choice=='N'||choice=='n')
    		rn=3;
    	else
    	{
    		cout<<"\nWrong choice enter again(y/n) : ";
    		goto label;
    	}
    cout<<"\nEnter the length of the password : ";
    int length;
    cin>>length;
    srand(time(0));
    while(true)
    {
    	string password="";
    	for(int i=0;i<length;i++)
    	{
    		int val=rand()%rn;
    		if(val==0)
    		{
    			password+=*next(lower.begin(),rand()%lower.size());
    		}
    		else
    			if(val==1)
	    		{
	    			password+=*next(upper.begin(),rand()%upper.size());
	    		}
	    		else
	    			if(val==2)
		    		{
		    			password+=*next(number.begin(),rand()%number.size());
		    		}
		    		else
		    			if(val==3)
			    		{
			    			password+=*next(symbol.begin(),rand()%symbol.size());
			    		}
    	}
    	cout<<"\nYour password is : "<<password;
    	cout<<"\nAre you satisfied with password(y/n) : ";
    	char c;
    	cin>>c;
    	if(c=='y'||c=='Y')
    		break;
    }



    

	return 0;
}
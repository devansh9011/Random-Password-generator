#include<iostream>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	vector<char> number={'0','1', '2', '3', '4', '5', '6', '7',
    				  	'8','9'};
	vector<char> lower={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',  
						'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 
						'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 
						'z'};
    vector<char> upper={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',  
						'I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q', 
						'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 
						'Z'};
    vector<char> symbol={'!','@', '#', '$', '%', '^', '&', '*'};

	char choice;
	vector<vector<char>> s;

	cout<<"\nDo you want to include numbers(y/n) : ";
	cin>>choice;
	 if(choice=='Y'||choice=='y')
    	s.push_back(number);

    cout<<"\nDo you want to include lower case alphabets(y/n) : ";
	cin>>choice;
    if(choice=='Y'||choice=='y')
    	s.push_back(lower);

	cout<<"\nDo you want to include upper case alphabets(y/n) : ";
	cin>>choice;
    if(choice=='Y'||choice=='y')
    	s.push_back(upper);

	cout<<"\nDo you want to include symbols(y/n) : ";
	cin>>choice;
    if(choice=='Y'||choice=='y')
    	s.push_back(symbol);

	if(s.size()==0)
		return cout<<"\nCan not generate password from empty domain",0;
		
    cout<<"\nEnter the length of the password : ";
    int length;
    cin>>length;
    srand(time(0));
    while(true)
    {
    	string password="";
    	for(int i=0;i<length;i++)
    	{
    		int val=rand()%s.size();
    		password+=s[val][rand()%s[val].size()];
    	}
    	cout<<"\nGenerated password is : "<<password;
    	cout<<"\nAre you satisfied with password(y/n) : ";
    	char c;
    	cin>>c;
    	if(c=='y'||c=='Y')
    		break;
    }



    

	return 0;
}
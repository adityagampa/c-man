#include<iostream>
#include<string.h>
using namespace std;
class aditya
{
		char ch[20];
	public:
		aditya(char s[20])
		{
			strcpy(ch,s);
		}
		void getletter();
		void inst();
};
void aditya::inst()
{
	cout<<"\n**** guess any letter of ur choice present in the word and enter it here ****"<<endl;
	cout<<"\n**** u have a maximum of "<<strlen(ch)+3<<" chances only ****"<<endl;
}
void aditya::getletter()
{
	char q[40];
	char p[40];
	int flag=0;
	for(int k=0;k<40;k++)
	{
		q[k]='*';
	}
	cout<<"**** it is a "<<strlen(ch)<<" letters word ****"<<endl;
	for(int j=0;j<strlen(ch)+3;j++)
	{
		cout<<"\n enter ur "<<j+1<<" guess : "<<endl;
		cin>>p[j];
		for(int i=0;i<strlen(ch);i++)
		{
			if(ch[i]==p[j])
			{
				cout<<"\n**** the letter "<<p[j]<<" is present at "<<i+1<<" ****"<<endl;
				q[i]=p[j];
				for(int k=0;k<strlen(ch);k++)
					cout<<q[k];
			}
		}
		cout<<endl;
	}
		for(int i=0;i<strlen(ch);i++)
		{
			if(q[i]=='*')
			{
				cout<<"----------------------------------------------------------"<<endl;
				cout<<"\n\n **** chances completed..!! u lost ..!! :( ****"<<endl;
				flag=1;
				break;
			}
		}
	if(flag==0)
	{
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"\n\n**** hurray..!! job done..!! u won..!! :) ****"<<endl;
		cout<<"\n the corect ans is :";
		for(int i=0;i<strlen(ch);i++)
		{
				cout<<q[i];
		}
	}
}

int main()
{
	cout<<"\n**** THE GAME BEGINS ****"<<endl;
	aditya a("sachin");
	a.inst();
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\n**** QUESTION 1 ****"<<endl;
	cout<<"\n WHO IS WELL KNOWN AS THE GOD OF CRICKET ..??"<<endl;
	a.getletter();
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\n**** QUESTION 2 ****"<<endl;
	cout<<"\n WHO IS THE VICE CAPTAIN OF INDIAN CRICKET TEAM ..??"<<endl;
	aditya b("kohli");
	cout<<"----------------------------------------------------------"<<endl;
	b.inst();
	cout<<"----------------------------------------------------------"<<endl;
	b.getletter();
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\n\n **** HOPE U ENJOYED THE GAME ..!! TQ FOR PLAYING ..!! ****"<<endl;
	return 0;
}

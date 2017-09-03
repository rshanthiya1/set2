#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char c;
	cout<<"Enter a character: ";
	cin>>c;
	if((c>='a'&& c<='z') || (c>='A' && c<='Z'))
	{
		cout<<c<<" is an alphabet";
	}
	else
	{
		cout<<c<<" is not an alphabet";
	}
	getch();
}

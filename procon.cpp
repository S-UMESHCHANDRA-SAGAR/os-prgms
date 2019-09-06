#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int buffer[10],bufsize,in,out,produce,consume,ch=0;
in=0;
out=0;
bufsize=10;
while(ch!=3)
{
cout<<"\n1.producer\t2.consume\t3.exit";
cout<<"\nenter your choice";
cin>>ch;
switch(ch)
{
case 1: if((in+1)%bufsize==out)
	cout<<"buffer is full";
	else
	{
	cout<<"enter the value:";
	cin>>produce;
	buffer[in]=produce;
	in=(in+1)%bufsize;
	}
	break;
case 2: if(in==out)
	cout<<"buffer is empty";
	else
	{
consume=buffer[out];
cout<<"\nthe consumed valuseis"<<consume<<"\n";
out=(out+1)%bufsize;
}
break;
}
}
}

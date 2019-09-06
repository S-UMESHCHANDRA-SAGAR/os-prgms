/*to  write a C++ program to simulate the concept of dining philosophers problem*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int tph,philname[20],status[20],howhung,hu[20],cho;
void one();
void two();
int main()
{
int i;
cout<<"\n\nDining philosopher problem";
cout<<"\nEnter the total no. of philosophers : ";
cin>>tph;
for(i=0;i<tph;i++)
{
philname[i]=(i+1);
status[i]=1;
}
cout<<"How many are hungry:";
cin>>howhung;
if(howhung==tph)
{
cout<<"\nAll are hungry...\nDead lock stage will occur  : ";
cout<<"\nExiting\n";
}
else
{
for(i=0;i<howhung;i++)
{
cout<<"ENter philosopher "<<i+1<<" position : ";
cin>>hu[i];
status[hu[i]]=2;
}
do{
cout<<"1.One can eat ata a time\t2.Two can eat at a time\t3.Exit\nEnter your choice: ";
cin>>cho;
switch(cho)
{case 1: one();
break;
case 2: two();
break;
case 3: exit(0);
default :cout<<"\nINVALID OPTION ..";
}
}while(1);
}
}
void one()
{
int pos=0,x,i;
cout<<"\nALLOW ONE PHIOSOPHER TO EAT AT ANY TIME \n";
for(i=0;i<howhung;i++,pos++)
{
cout<<"\nP"<<philname[hu[pos]]<<" is granted to eat \n";
for(x=pos;x<howhung;x++)
{
cout<<"\nP"<<philname[hu[x]]<<" is waiting \n";
}
}
}
void two()
	{
		int i,j,s=0,t,r,x;
		cout<<"\nALLOW TWO PHILISOPHERS TO EAT AT THE SAME TIME\n";
		for(i=0;i<howhung;i++)
			{
			for(j=i+1;j<howhung;j++)
				{
				if(abs(hu[i]-hu[j])>=1&&abs(hu[i]-hu[j])!=4)
					{
					cout<<"\n\ncombination  "<<s+1<<endl;
					t=hu[i];
					r=hu[j];
					s++;
					cout<<"\nP "<<philname[hu[i]]<<" and P "<<philname[hu[j]]<<" are granted to eat\n";
					for(x=0;x<howhung;x++)
						{
						if((hu[x]!=t)&&(hu[x]!=r))
						cout<<"\nP "<<philname[hu[x]]<<" is waiting \n";
						}
					}
				}
			}
	}


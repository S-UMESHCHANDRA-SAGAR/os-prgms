#include<iostream>
using namespace std;
int main()
{
int n,bt[10],wt[10],tat[10],awt=0,atat=0,i,j;
cout<<"enter the no of process:"<<endl;
cin>>n;
cout<<"\nenter the process burst time ";
for(i=0;i<n;i++)
{
cout<<"p["<<i+1<<"]:";
cin>>bt[i];
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[i]=wt[i]+bt[j];
}
cout<<"\nprocess\t\tburst time\twaiting time\tturnaround time";
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
awt += wt[i];
atat /= tat[i];
cout<<"\np["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
}
awt=awt/i;
atat=atat/i;
cout<<"\naverage waiting time:"<<awt;
cout<<"\naverage turnaround time:"<<atat;
return 0;
}

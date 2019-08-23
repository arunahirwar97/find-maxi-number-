#include<iostream.h>
#include<conio.h>
void main()
 {
 clrscr();
 for(int j=1;j<3;j++)
 {
 int a;
 float arr[100];

 cout<<"Enter any totals  elements ::";
 cin>>a;

 for(int i=0;i<=a;i++)
{
cout<<"Enter Elements :"<< i+1 <<":";

	    cin>>arr[i];

 }
 for( i=1;i<=a;i++)
 {
 if(arr[0]<arr[i])
 arr[0]=arr[i];
   }
       cout<<"Largest number ="<<arr[0];
	   cout<<"\n\n\t";
  }
 getch();
 }
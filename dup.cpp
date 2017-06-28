#include<iostream.h>
#include<conio.h>
 void main()
 {
  int i,a[100],j,n;
  clrscr();
  cout<<"Enter size of array: ";
  cin>>n;
  cout<<"Enter any "<<n<< "elements in array: ";
  for(i=0;i<n;i++)
  {
   cin>>a[i]);
  }
  cout<<"Duplicate elements are: ";
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    cout<<a[i];
    }
   }
   }
  getch();
 }

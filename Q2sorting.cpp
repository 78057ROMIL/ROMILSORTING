#include<iostream>
#include<conio.h>
using namespace std;
int linearsearch(int a[],int ele, int val)
{
  for (int i = 0; i < ele; i ++)
{
  if (a[i]== val)
{
  return i+1;

}

}
  return -1;
}

int main()
{

    int a[20], ele, val, pos;

    cout<<"enter the number of elements";
    cin>>ele;

    cout<<"enter the entries " ;
    for (int i = 0; i < ele; i ++)
    {
        cin >> a[i];
    }

    cout<<"enter the element to search for" ;
    cin>> val;
    pos = linearsearch(a,ele,val);

    if (pos!= -1 )
        cout<<"element found at " << pos <<" position";
    else
        cout<<"element not found";

    getch();
    return(0);
}

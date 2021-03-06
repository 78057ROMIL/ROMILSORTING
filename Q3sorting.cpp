#include<iostream>
#include<conio.h>
using namespace std;

int linearsearch(int a[],int ele, int val)
{
  int low = 0, high = ele - 1, middle;
    while (low <= high){
    middle = (low + high)/2;

    if (a[middle] == val)
    return middle+1;

    if (a[middle] < val)
    low = middle + 1;

    if (a[middle] > val)
    high = middle -1;
    }
    return -1;
}

int main()
{

    int a[20], ele, val, pos;

    cout<<"enter the number of elements";
    cin>>ele;

    cout<<"enter the entries (in ascending order)" ;
    for (int i = 0; i < ele; i ++)
    {
        cin >> a[i];
    }

    cout<<"enter the element to search for" ;
    cin>> val;
    pos = linear_search(a,ele,val);

    if (pos!= -1 )
        cout<<"element found at " << pos <<" position";
    else
        cout<<"element not found";
    getch();
}

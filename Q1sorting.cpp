#include<iostream>
#include<conio.h>
using namespace std;

void selectionsort (int a[],int ele )
{int i,j ;
    for(i = 1; i <= ele; i++)
        for(j = i+1; j <= ele; j++)
    {
        if (a[i]>a[j])
            {
        a[i] = a[i]+a[j];
        a[j] = a[i]-a[j];
        a[i] = a[i]-a[j];

            }
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<ele;i++)
    {
        cout <<a[i]<<"\t";
    }
}


void bubblesort (int a[],int ele )
{int i,j ;
    for (i = 1; i <= ele; i++)
        for (j = 1; j <= ele-1; j++)
    {
        if (a[i]>a[j])
            {
        a[i] = a[i]+a[j];
        a[j] = a[i]-a[j];
        a[i] = a[i]-a[j];

            }
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<ele;i++)
    {
        cout <<a[i]<<"\t";
    }
}



void insertionsort (int a[], int ele)
{
    for(int k=1; k<ele; k++)
    {
        int temp = a[k];
        int j= k-1;
        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<ele;i++)
    {
        cout <<a[i]<<"\t";
    }
}

int main ()

{

    int i,ch , ele, a[10];

    cout << "enter the number of elements" ;
    cin>> ele;

    cout<<"enter the elements of the array to be sorted" ;
    for (i=1; i<= ele; i++)
    {
        cin>>a[i];
    }

     cout<<" \n******** MENU ********\n";
     cout<<"\n1. SELECTION SORT\n";
     cout<<"\n2. BUBBLE SORT\n";
     cout<<"\n3. INSERTION SORT\n";
     cout<<"\nenter your choice\n";
     cin >> ch;

     if (ch == 1)
        selectionsort(a,ele);
     if (ch == 2)
        bubblesort(a,ele);
     if (ch==3)
        insertionsort(a,ele);

     getch();
     return(0);
}

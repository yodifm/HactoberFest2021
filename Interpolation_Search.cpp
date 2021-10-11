//Searching element in a sorted uniformly distributed array using interpolation search
#include <iostream>
using namespace std;

int interpolation_search(int a[],int n,int key)
{
    int pos,first,last;
    first=0;
    last=n-1;
    while(first<=last)
    {
        pos=(first+key-a[first])*(last-first)/(a[last]-a[first]);
        if(a[pos]==key)
        {
            return pos;
        }
        else if(key<a[pos])
        {
            last=pos-1;
        }
        else if(key>a[pos])
        {
            first=pos+1;
        }
    }
    return -1;
    
}

int main()
{
    int n,a[20],b,i,key;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search : ";
    cin>>key;
    b=interpolation_search(a,n,key);
    if(b==-1)
    {
        cout<<"Element not found ";
    }
    else 
    {
        cout<<"Element found at index "<<b;
    }

    return 0;
}

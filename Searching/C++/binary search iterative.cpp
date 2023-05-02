#include <iostream>
using namespace std;

int Binary_Search(int arr[],int l,int r,int val)
{
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (arr[mid]==val)
            return mid;
        else if(val>arr[mid])
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}

int main ()
{
    int item,i,n,result,l=1;
    int A[30];
    cout<<"Enter number of elements: ";
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>A[i];
    cout<<"Enter the item to search: ";
    cin>>item;
    result=Binary_Search(A,l,n,item);
    if (result==-1)
        cout<<"Not found."<<endl;
    else
        cout<<item<<" found at the position "<<result<<endl;
    return 0;
}


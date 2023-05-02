#include <iostream>
using namespace std;

int Binary_Search(int arr[],int l,int r,int val)
{
    if (l==r)
    {
        if (arr[l]==val)
            return l;
        else
            return -1;
    }
    else
    {
        int mid=(l+r)/2;
        if (arr[mid]==val)
            return mid;
        if (val>arr[mid])
            return Binary_Search(arr,mid+1,r,val);
        else
            return Binary_Search(arr,l,mid-1,val);
    }
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
    if (!(result==-1))
        cout<<item<<" found at the position "<<result<<endl;
    else
        cout<<"Not found."<<endl;
    return 0;
}

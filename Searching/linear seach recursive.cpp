#include <iostream>
using namespace std;
int Linear_Search(int arr[],int l,int r,int val)
{
    if (l>r)
        return -1;
    if (arr[l]==val)
        return l;
    if (arr[r]==val)
        return r;
    return Linear_Search(arr,l+1,r-1,val);
}

int main ()
{
    int item,i,n;
    int A[30];
    cout<<"Enter number of elements: ";
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>A[i];
    int l=1,r=n,result;
    cout<<"Enter the item to search: ";
    cin>>item;
    result=Linear_Search(A,l,n,item);
    if (result==-1)
        cout<<"Not found."<<endl;
    else
        cout<<item<<" found at the position "<<result<<endl;
    return 0;
}




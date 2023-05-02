#include <iostream>
using namespace std;

int Linear_Search(int arr[],int n,int val)
{
    for (int i=1;i<=n;i++)
        if (arr[i]==val)
            return i;
    return -1;
}

int main()
{
    int item,i,n,result;
    int A[30];
    cout<<"Enter number of elements: ";
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>A[i];
    cout<<"Enter the item to search: ";
    cin>>item;
    result=Linear_Search(A,n,item);
    if (result==-1)
        cout<<"Not found."<<endl;
    else
        cout<<item<<" found at the position "<<result<<endl;
    return 0;
}

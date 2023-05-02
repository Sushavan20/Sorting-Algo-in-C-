#include <iostream>
using namespace std;
int count=0;
int bubble_sort(int a[],int n)
{
    int p=0;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                ++count;
            }
        }
        cout<<"Pass "<<p+1<<": ";
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        ++p;
    }
}
/*
int bubble_sort(int arr[],int n) // recursion
{
    int p=0;
    if (n==1)
        return 0;
    for (int i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            ++count;
        }
    }
    bubble_sort(arr, n-1);
}
*/
int main ()
{
    int l,arr[20];
    cout<<"Enter the number of element: ";
    cin>>l;
    cout<<"Enter the elements: "<<endl;
    for (int i=0;i<l;i++)
        cin>>arr[i];
    bubble_sort(arr,l);
    cout<<"Sorted array: ";
    for (int i=0;i<l;i++)
        cout<<arr[i]<<" ";
    cout<<"\nCount: "<<count<<endl;
    return 0;
}


#include<iostream>
using namespace std;

void heapAdjust(int a[],int i,int n)
{
    int key=a[i];
    int j=2*i;
    while(j<=n)
    {
        if(j<n && a[j]<a[j+1])
            j=j+1;
        if(key>=a[j])
            break;
        a[j/2]=a[j];
        j*=2;
    }
    a[j/2]=key;
}

void heapify(int a[],int n)
{
    for(int i=n/2;i>=1;--i)
        heapAdjust(a,i,n);
}

void heap_sort(int a[],int n)
{
    heapify(a,n);

    cout<<"\nMax Heap: ";
    for(int i=1;i<=n;++i)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    int k=1;
    int t=1;
    for(int i=n;i>=2;--i)
    {
        int temp=a[k];
        a[k]=a[i];
        a[i]=temp;

        heapAdjust(a,k,i-1);

        cout<<"pass "<<t++<<":";
        for(int i=1;i<=n;++i)
            cout<<a[i]<<" ";
        cout<<endl<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    n=n+1;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=1;i<n;++i)
        cin>>arr[i];

    heap_sort(arr,n-1);

    cout<<"\nsorted array : ";
    for(int i=1;i<n;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}




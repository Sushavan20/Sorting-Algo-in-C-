package Sorting.Java;

import java.util.*;

class HelloWorld {
    public static void InsertionSort(int arr[],int n){
        for(int i=1;i<n;i++){
            int key = arr[i];
            int j=i-1;
            while (j>=0 && arr[j]>key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        
        System.out.print("Output array: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of elements in array: ");
        int n = sc.nextInt();
        System.out.print("Enter number of array: ");
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        InsertionSort(arr,n);
        
    }
}

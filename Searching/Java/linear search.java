import java.util.*;

class HelloWorld {
    public static int linearSearch(int[] arr, int key){    
        for(int i=0;i<arr.length;i++){    
            if(arr[i] == key){    
                return i;    
            }    
        }    
        return -1;    
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
        System.out.print("Enter number to search: ");
        int num = sc.nextInt();
        System.out.println(num+" is found at index: "+linearSearch(arr, num));  
        
    }
}
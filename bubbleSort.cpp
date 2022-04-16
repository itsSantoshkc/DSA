#include<iostream>

using namespace std;

void bubbleSort(int arr[],int n);
void swap(int *x,int*y);
void print(int arr[],int n);

int main(){
int arr[] = {5,1,4,10,1,6,2,12,3};
    int n;
    n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    print(arr,n);
    bubbleSort(arr,n);
    cout<<"Sorted Array :";
    print(arr,n);
    return 0;
}

void bubbleSort(int arr[],int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for(j = 0;j< n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
    }
    
}

void swap(int *x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

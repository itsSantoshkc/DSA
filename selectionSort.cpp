#include<iostream>

using namespace std;

void swap(int *x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

void selectionSort(int arr[],int n){
        int i,j,min_idx;
        for(i = 0; i<n;i++){
            min_idx = i;
            for(j=i+1;j<n;j++){
                if(arr[j] < arr[min_idx]){
                    min_idx = j;
                }
            }
                swap(&arr[i],&arr[min_idx]);
        }
}

void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main(){
     int arr[] = {5,4,10,1,6,2,12,3};
    int i,j,n,temp;
    n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    print(arr,n);
    selectionSort(arr,n);
    cout<<"Sorted Array :";
    print(arr,n);


}



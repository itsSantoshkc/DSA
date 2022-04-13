#include<iostream>

using namespace std;

int binarySearch(int arr[],int key,int n);

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the value you want to search"<<'\n';
    cin>>key;
    int result = binarySearch(arr,key,n);
    if(result == -1){
        cout<<"Your value is not in the array";
    }else{
        cout<<"Your value is in index : "<<result +1;
    }
    return 0;
}

int binarySearch(int arr[],int key,int n){
    int low = 0;
    int high = n;
    while(low <= high){
        int mid = (high+low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]> key){
            high = mid-1;
        }else{
            low = mid+ 1;
        }
    }
    return -1;
}
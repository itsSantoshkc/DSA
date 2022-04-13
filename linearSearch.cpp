#include<iostream>

using namespace std;
int linearSearch(int arr[],int n,int key);
 

int main(){

    int arr[] = {20,30,50,99,22,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    std::cout<<"Enter the value you want to search"<<endl;
    std::cin>>key;
    int result = linearSearch(arr,n,key);
    if(result == -1){
        std::cout<<"You entered value is not there";
    }else{
        std::cout<<"Your value is in index no : "<<result+1;
    }
    
    return 0;
}
int linearSearch(int arr[],int n,int key){
       for(int i = 0;i<=n;i++){
        if(arr[i]==key){
            return i;
        }
    }
return -1;
}
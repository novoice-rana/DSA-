#include<iostream>
using namespace std;
int searchInNearly(int arr[],int target,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid-1>0 && arr[mid-1]==target){
            return mid-1;
        }if(arr[mid]==target){
            return mid;        
        }if(mid+1<n && arr[mid+1]==target){
            return mid+1;
        }if(target>arr[mid]){
            // right
            s=mid+2;

        }else{
            e=mid-2;
        }

    }
    return -1;

}
  
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=40;
    int index=searchInNearly(arr,target,n);
    if(index==-1){
        cout<<"Element not Found"<<endl;
    }else{
        cout<<"Element  found at index "<< index <<endl;
    }




}
#include<iostream>
using namespace std;
int  binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=start+end/2;
    while(start<end){
       int mid=start+end/2;
        if(arr[mid]==target){
            return mid;

        }
        if(target>arr[mid]){
            start=mid+1;
        }
        if(target<arr[mid]){
            end=mid-1;
        }
        
    }
    // element not found
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int target =60;
    int ansIndex=binarySearch(arr,n,target );
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at Index "<<ansIndex<<endl;
    }


}
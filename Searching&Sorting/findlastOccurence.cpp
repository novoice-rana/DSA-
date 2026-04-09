#include<iostream>
using namespace std;
int findLastOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans =mid;
            s=mid+1;
        }else if( arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;


}
int main(){
    int arr[]={10,20,30,30,30,30,30,40,50};
    int n=9;
    int target=30;
    int index=findLastOccurence(arr,n,target);
    cout<<"The index is "<< index <<endl;
}

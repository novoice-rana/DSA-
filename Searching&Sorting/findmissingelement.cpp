#include<iostream>
using namespace std;
int findmissingElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    int ans=-1;
    while(s<=e){
        int diff=arr[mid]-mid;
        if(diff==1){
            // right me jao
            s=mid+1;
        }else{
            ans =mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans+1;


}
int main(){
    int arr[]={2,3,4,5,6,7,8,9,};
    int n=8;
    
    int index=findmissingElement(arr,n);
    cout<<"The missing element is "<< index <<endl;
}

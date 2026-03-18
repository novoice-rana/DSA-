 #include<iostream>
 using namespace std;
int getUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++)
    // Xor operation me same vallues kat ke phitush ho jata hai
      ans=ans^arr[i];

    return ans;
}

 int main(){
    int arr[]={2,10,11,20,2,10,20};
    int n=7;
    int finalAns=getUnique(arr,n);
    cout<<"Final Answer is "<<finalAns<<endl;     
    
 }
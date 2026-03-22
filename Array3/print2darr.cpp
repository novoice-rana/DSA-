#include <iostream>
using namespace std;
#include<limits.h>
// void printArray(int arr[][4],int row,int col ){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void colWisePrint(int arr[][4],int row,int col){
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }


// bool findTarget(int arr[][4],int row,int col,int target){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
int findMax(int arr[][4],int row,int col){
    int maxAns=INT_MIN;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]>maxAns){
            maxAns=arr[i][j];
        }
    }
}
return maxAns;

}

int main(){
int arr[3][4]={
        {1,2,2,3},
        {5,6,7,8},
        {4,8,9,5}};
        int row=3;
        int col=4; 
        cout<<findMax(arr,row,col)<<endl; 
}

    
        // int target=99 ;
        // cout<<"Found or Not :"<<findTarget(arr,row,col,target)<<endl;

        // printArray(arr,row,col);
        // colWisePrint(arr,row,col);

    // int arr[3][3];
    // int row =3;
    // int col=3;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"ENter the input "<<i<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }

    
    

    
    
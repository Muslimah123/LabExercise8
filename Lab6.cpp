#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int Array[2];

int A[32][32]
int[78]
//using the linearIndx()
int LinearIndx(int k ,int l){
    if(l>k){
        return -1;
    }
    
    else
    int m=(((k*k)+k)/2) + l
    return m;
}
/*using reverseIdx()
its return type is an array of two integers
*/
int* ReverseIdx(int arr[32][32],int m,int ar[78]){
    for(int i=0;l<32;i++){
        for(int j=0;j<32,j++){
            if(j<=i){
                int temp=(((i*i)+i)/2) + j;
                if (temp==m){
                    Array[0]=i;
                    Array[1] =j;
                    return Array;        
               }
            }
        }
    }
    return Array;
}

int main(){
    int s=32;
    int m=78
    for(int i=0;i<s;i++){
        for(int j+0;j<m;j++){
            if(j<=i){
                A[i][j]=rand()%1000;
            }
            else{
                A[i][j]=0;
            }
        }
    }
    for(int i=0;i<s;++i){
        for(int j=0;j<n;++j){
            int l=LinearIndx(i,j);
             if(i!=-1){
                 B[I]=A[i][j];
             }
        }
    }
    int b[s][s];
    for(int i=0;i<m;++i){
        int* S=ReverseIdx(b,i,B);
        int e=S[0];
        int y=S[1];
        
        b[e][y]=B[i];
    }
   
   //printing the elements
   for(int i=0;i<6;++i){
       for (int j=0;j<6;++j){
           if(A[i][j] !=0){
               cout<<"A["<<i<<"] ["<<j<<"] "<<A[i][j]<,endl;
           }
       }
   }
   return 0;
}

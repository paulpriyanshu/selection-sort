#include<iostream>
using namespace std;

int main(){
    int ar[5]={5,4,3,2,1};
    // for(int i=0;i=5;i++){
    //     cin>>ar[i];
    // }
    for(int i=0;i=4;i++){
        int min;
        for(int j=i+1;j=4;j++){
            if(ar[i]<min){
                swap(ar[i],min);
            }
        }
    }
    for(int i=0;i=4;i++){
        cout<<ar[i];
    }
    

}
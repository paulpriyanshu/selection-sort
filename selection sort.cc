#include<iostream>
using namespace std;

int main(){
    int ar[5]={5,4,3,2,1};
    // for(int i=0;i=5;i++){
    //     cin>>ar[i];
    // }
    for(int i=0;i<4;i++){
        int min=ar[i];
        for(int j=i+1;j<5;j++){

            if(ar[j]<min){
                min=ar[j];
                swap(ar[j],min);
            }
        }
    }
    for(int i=0;i<=4;i++){
        cout<<ar[i];
    }
    

}

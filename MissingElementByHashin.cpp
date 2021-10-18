#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Size of array";
    cin>>n;
    int a[n];
     int min= 100000;
     int max=-1;
     for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]>max){
             max=a[i];
         }
         if(a[i]<min){
             min=a[i];
         }
     }

     int hash[max]={0};
     for(int i=0;i<=max;i++){
         hash[a[i]]++;
     }
     for(int i=1;i<=max;i++){
         if(hash[i]==0){
             cout<< "Missing number is "<<hash[i]<<endl;
         }
         else{
             cout<<hash[i]<<endl;
         }
     }

    return 0;
}
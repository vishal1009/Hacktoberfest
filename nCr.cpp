#include<iostream>
using namespace std;


//nCr=   n!/(n-r)!*r!
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int n,r;
    cout<<" Enter the values of n and r:";
    cin>>n;
    cin>>r;
    
    int ncr=fact(n)/((fact(n-r))*fact(r));

    cout<<"nCr: "<<ncr<<endl;
}

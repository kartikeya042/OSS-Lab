#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n > 99 && n < 1000){
        int num = 0;
        while(n != 0){
            int temp = n%10;
            n/=10;
            num *= 10;
            num += temp;
        }
        cout<<num<<endl;
    }
    else{
        cout<<"Only 3 Digit Numbers Allowed!!";
    }
    return 0;
}
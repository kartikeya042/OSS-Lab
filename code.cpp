#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int num = 0;
    while(n != 0){
        int temp = n%10;
        n/=10;
        num *= 10;
        num += temp;
    }
    cout<<num<<endl;
    return 0;
}
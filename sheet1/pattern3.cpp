#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(j>i){
                cout<<" ";
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

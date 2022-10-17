#include<iostream>

using namespace std;

int power(int n, int p){
    int ans;
    if(p==0){
        return 1;
    }
    ans=n*power(n,p-1);
    return ans;
}

int main(){
    
    cout<<power(2,4);
    return 0;
}
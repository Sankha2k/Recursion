#include<iostream>

using namespace std;
string remove_duplicate(string str){
    if(str.length()==0){
        return "";
    }

    char ch=str[0];
    string ans = remove_duplicate(str.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    string str;
    cin>>str;
    cout<<remove_duplicate(str);
    return 0;
}
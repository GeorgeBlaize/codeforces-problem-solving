#include<bits/stdc++.h>
using namespace std;


int main(){
   

    string userName;

    cin>>userName;  

    set<char> userNameSet;

    for(int i=0;i<userName.length();i++){

        userNameSet.insert(userName[i]);

    }

    if(userNameSet.size()%2==0){

        cout<<"CHAT WITH HER!"<<endl;

    }

    else{

        cout<<"IGNORE HIM!"<<endl;

    }   

    return 0;

}
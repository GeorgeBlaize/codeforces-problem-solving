#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int sw,arr[5][5];

    for(int i=0; i<5; i++){

        for(int j=0; j<5; j++){
            
            cin>>arr[i][j];
            
            if(arr[i][j]==1){

                sw=abs(i-2)+abs(j-2);
                
            }
        }
    }

    cout<<sw<<endl;

    return 0;
}
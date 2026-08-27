#include<bits/stdc++.h>
using namespace std;

int main(){

     int wordLength;

     cin>>wordLength;
     

     while(wordLength--){

       
         string word;

         cin>>word;
 

    if(word.length()>10){

       cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
       
     }

     else{

        cout<<word<<endl;

     }
    
    }
    
    return 0;

}
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string word;

    int upperCase=0,lowerCase=0;

    cin>>word;


    for (int i = 0; i <word.size(); i++)
    {
        
         if(isupper(word[i])){
            upperCase++;
         }
         else{
            lowerCase++;
         }

    }
     

    if(upperCase>lowerCase){

        for(int i=0; i<word.size(); i++){

            cout<<char(toupper(word[i]));
        }
    }

    else{
        for(int i=0; i<word.size(); i++){

            cout<<char(tolower(word[i]));
        }
    }
    
    return 0;
    
}

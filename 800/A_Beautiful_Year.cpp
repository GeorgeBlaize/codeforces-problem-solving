#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;

    cin>>n;

    string s;

    while (1)
    {
        n++;

        s=to_string(n);

        set<char>st;

        for(int i=0; i<4; i++){

            st.insert(s[i]);

        }

        if(st.size()==4)break;

        else{
            n=stoi(s);
        }
    }

    cout<<s<<endl;

    return 0;
    
}

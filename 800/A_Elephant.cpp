#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,minimumSteps=0;

    cin>>n;

    if(n%5==0){

        minimumSteps=n/5;

    }

    else{

        minimumSteps=n/5 +1;

    }

    cout<<minimumSteps<<endl;

    return 0;
}
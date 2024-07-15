/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: N - IQ GAME
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("game.in", "r", stdin);

    int x;
    cin>>x;
    while(x--){
        int A,B,C;
        cin>>A>>B>>C;

        if(A+B==C){
            cout<<"+"<<endl;
        }
        else if(A-B==C)
        {
            cout<<"-"<<endl;
        }
        else if(A*B==C){
            cout<<"*"<<endl;
        }
        else{
            cout<<"none"<<endl;
        }
    }
    return 0;
}

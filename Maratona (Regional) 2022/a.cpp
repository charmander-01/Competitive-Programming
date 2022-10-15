#include <bits/stdc++.h>
#include <string.h>
using namespace std;
typedef long long ll;

ll i;
ll cont = 0;
ll cont2 = 0;
ll total = 0;
ll tam;
string s; 

int main(){

    cin >> tam;
    cin >> s;

    for(i=0;i<tam;i++)
    {
        if(s[i]=='a')
        {
            if(i!=0 && i!=tam-1)
            {
                if(s[i+1]=='a' or s[i-1]=='a')
                {
                    cont++;
                }
            }
            else
            {
                if(i==0)
                {
                    if(s[i+1]=='a')
                    {
                        cont++;
                    }
                }
                if(i==tam-1)
                {
                    if(s[i-1]=='a')
                    {
                        cont++;
                    }
                }
            }
        }
    }

    cout << cont << "\n";

    return 0;
}
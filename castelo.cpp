#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double raiz;
    int n, C;
    int resultado;

    cin >> n;

    while(n--)
    {
        cin >> C;
        raiz = (sqrt(C)) * (sqrt(2.0/3.0));
        for(int i=1;i<=floor(raiz);i++)
        {
            resultado = 1.5*i*i + 0.5*i;
            if(resultado==C)
            {
                cout << i << "\n";
                break;
            }
            if(resultado>C)
            {
                cout << i-1 << "\n";
                break;
            }    
        }
    }    
    return 0;
}
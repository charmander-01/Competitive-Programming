#include <bits/stdc++.h>
using namespace std;

int n, soma, in, finalj, finalm;

int vetj[3], vetm[3];

vector <int> jogo;

vector <int> decks(14, 4);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    soma = 0;
    
    for(int i = 0; i < 2;i++){
        cin >> vetj[i]; 
        decks[vetj[i]]--;
        if(vetj[i] > 10) vetj[i]=10;
        soma += vetj[i];

    }

    vetj[2] = soma;

    soma = 0;

    for(int i = 0; i < 2;i++){
        cin >> vetm[i];
        decks[vetm[i]]--;
        if(vetm[i] > 10) vetm[i]=10;
        soma += vetm[i];
    }

    vetm[2] = soma;

    finalj = vetj[2];

    finalm = vetm[2];

    for(int i = 0; i < n; i++){
        cin >> in;

        jogo.push_back(in);
        decks[in]--;
        if(in> 10) in=10; 

        finalj += in;

        finalm += in;

        

    }

    //cout << finalj << " " << finalm << "\n";

    for(int x = 1; x <= 13; x++){

        
        if(decks[x] != 0){
            int i;
            if(x>10) i=10;
            else i=x;
            //cout << finalj + i << " " << finalm + i << "\n";

            if((finalj + i) > 23 or (finalm + i) == 23){
                if(((finalj + i) > 23 and (finalm + i) > 23) ){
                    cout << "-1\n";
                    return 0;
                }
                else{
                    //cout << "caso 1\n";
                    cout << i << "\n";
                    return 0;
                }

            } else if ( (finalj + i) == 23 && (finalm + i) == 23){
                //cout << "caso 2\n";
                cout << i << "\n";
                return 0;

            } else if ((finalj + i) == 23 and (finalm + i) > 23){
                     
                cout << "-1\n";
                return 0;
            }

        }

    }

    cout << "-1\n";

    return 0;
}
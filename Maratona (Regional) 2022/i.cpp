#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> vet;
    bool flag = true;
    int num;

    for(int cont=0; cont<8; cont++){
        cin>>num;
        vet.push_back(num);
    }

    for(int cont=0; cont<8; cont++){
        if(vet[cont]!= 0 and vet[cont]!=1){
            flag = false;
        }
    }

    if(flag){
        cout<<"S"<<endl;
    }else {
        cout<<"F"<<endl;
    }


    return 0;
}
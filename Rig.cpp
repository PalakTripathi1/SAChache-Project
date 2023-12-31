#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <time.h>

int main(){
    string sr;
    srand(time(0));
    ofstream f("instructions.txt");
    for(int i=0;i<100000;i++){
        sr.clear();
        for(int j=0;j<50;j++){
            ll kt=rand()%2;
            if(kt)sr.push_back('1');
            else
            sr.push_back('0');
        }
        f<<sr<<"\n";
    }
}

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        for(int i=1;i<=a;++i){
            cout<<i<<'*'<<i<<'='<<i*i<<"\n";;
        }
        
    }
    return 0;
}
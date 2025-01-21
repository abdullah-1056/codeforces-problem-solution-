#include <iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, k;
    cin >>n>>k;
    ll p =(n+1)/2;

    if (k <= p) {
        cout <<2*k-1<< endl;
    }else{
       cout <<2*(k-p)<< endl;
    }
}

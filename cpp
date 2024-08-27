#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
         cin>>a[i];
    int psa[n];
    psa[0] = a[0];
    for (int i= 1; i<n; i++)
        psa[i] = psa[i-1] + a[i];
    int m;
    cin>>m;
    while(m--){
        int l,h;
        cin>>l>>h;
        int sum = 0;
        if (l==0)
           sum = psa[h];
        else 
           sum = psa[h] - psa [l -1];
        cout << sum << endl;
    }
return 0;
}

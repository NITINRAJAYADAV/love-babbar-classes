#include<iostream>
using namespace std;

int power ( int n){
    if (n==0)
        return 1;
        int smallprobleam=power(n-1);
        int biggerprobleam=2*smallprobleam;
        return biggerprobleam;
    
}



int main() {
    int n;
    cin>>n;
    int ans= power(n);
    cout<<ans<<endl;
}

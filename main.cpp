#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    //cout<<n<<endl;
    if (n>=2){
        int i=0,b=1,a=0,c=1;
        for(i;i<n;i++){
            cout<<c<<endl;
            c=a+b;
           a=b;
           //cout<<"a"<<a<<endl;
           b=c;
            //cout<<"b"<<b<<endl;
        }}
    else{
        cout<<"errore"<<endl;
    }
    return 0;
}


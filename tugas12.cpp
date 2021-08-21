#include <iostream>
#include <string>

using namespace std;

int main(){
    int x[3]={1,5,4};
    int y[3]={3,2,5};
    
    string a;
    string b;
    string c;
    
    for(int i=0; i<3; i++){
        a=a+"Array x ";
        a=a+to_string(i)+" : ";
        a=a+to_string(x[i])+"\n";
        
        b=b+"Array y ";
        b=b+to_string(i)+" : ";
        b=b+to_string(y[i])+"\n";
        
        c=c+"Array Penjumlahan ";
        c=c+to_string(i)+" : ";
        c=c+to_string(x[i]+y[i])+"\n";
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}

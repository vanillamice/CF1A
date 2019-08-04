#include <iostream>
 
using namespace std;
 
int main()
{
    long long b=0,c=0;
    long long n;
    long long m;
    long long a;
    long long flagstones;
    cin>>n>>m>>a;
    b=m/a;
    if(m%a!=0){
        b++;
    }
    c=n/a;
    if(n%a!=0){
        c++;
    }
 
 
    flagstones=b*c;
 
    cout<<flagstones<<endl;
 
    return 0;
}

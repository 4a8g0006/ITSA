#include<iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int n;
    while(cin>>n){
    double ans=n*1.6; //�]double���A�T�O 
    cout<<fixed<<setprecision(1)<<ans<<"\n";
    }
     
    return 0;   
}

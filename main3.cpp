#include<iostream>
using namespace std;
 
int main()
{
    //a �w�]�b�| 
    //b �s���b�| 
    int m,n;
    while(cin>>m>>n){
        int a=10000;
        double b=(m*m)+(n*n); //�]double���A�T�O 
        if(b<a){
            cout<<"inside\n";
        }
        else{
            cout<<"outside\n";
        }
     
    }
     
    return 0;   
}


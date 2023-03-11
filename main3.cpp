#include<iostream>
using namespace std;
 
int main()
{
    //a 預設半徑 
    //b 新的半徑 
    int m,n;
    while(cin>>m>>n){
        int a=10000;
        double b=(m*m)+(n*n); //設double型態確保 
        if(b<a){
            cout<<"inside\n";
        }
        else{
            cout<<"outside\n";
        }
     
    }
     
    return 0;   
}


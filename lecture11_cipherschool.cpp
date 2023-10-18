#include<iostream>
using namespace std;
int main(){
    cout<<"the size of int is : "<<sizeof(int)<<endl;
    cout<<"the size of float is : "<<sizeof(float)<<endl;
    cout<<"the size of char is : "<<sizeof(char)<<endl;
    cout<<"the size of long int is : "<<sizeof(long int)<<endl;
    cout<<"the size of short int is : "<<sizeof(long int)<<endl;
    cout<<"the size of long long int is : "<<sizeof(long long int)<<endl;
    cout<<"the size of double is : "<<sizeof(double)<<endl;
    return 0;
}




#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=10,b=9;
    cout<<"Address of a is "<<&a<<" and b is "<<&b<<endl;
}

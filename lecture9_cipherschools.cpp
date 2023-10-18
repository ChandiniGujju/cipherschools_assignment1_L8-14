#include<iostream>
using namespace std;
int compare(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=compare(a,b);
    cout<<"the greatest number is : "<<c<<endl;
    return 0;
}






#include<iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c=a+b;
    a=10;
    b=11;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    a=9,b=8;
    int c;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
}




#include<iostream>
using namespace std;
int sum(int,int);//function prototype
int main(){
    int a,b;
    a=9,b=8;
    int c;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=10;
    b=11;
    c=a+b;
    return c;
}






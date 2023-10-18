#include<iostream>
using namespace std;
void printHi(){
    cout<<"Hi"<<endl;
    return;
}
int sum(int a,int b){//these are formal parameters
    int c;
    a=500;
    cout<<"The value of c is : "<<c<<endl;
    c=a+b;
    return c;
}
int main(){
    printHi();

    int a,b;
    int c=75;
    a=4,b=6;
    int d;
    d=sum(a,b);//these are actual parameters
    cout<<"The sum of a and b is : "<<d<<endl;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of c is : "<<c<<endl;
    return 0;
}





#include<iostream>
using namespace std;
void swapping(int &a,int &b){
    a=9,b=5;
    cout<<"the values of a and b before swapping is : "<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"the values of a and b after swapping is : "<<a<<" "<<b<<endl;
}
void fun(int &a,int b){
    a=99999;
    b=99999;
    cout<<"the values of a and b in fun function are : "<<a<<" "<<b<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    swapping(a,b);
    cout<<"the values of a and b after swapping is : "<<a<<" "<<b<<endl;
    cout<<"the values of a and b before passing to fun function  is : "<<a<<" "<<b<<endl;
    fun(a,b);
    cout<<"the values of a and b after passing to fun function  is : "<<a<<" "<<b<<endl;
}




#include<iostream>
using namespace std;
void swapping(int a,int b){
    a=9,b=5;
    cout<<"the values of a and b before swapping is : "<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"the values of a and b after swapping is : "<<a<<" "<<b<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    swapping(a,b);
    cout<<"the values of a and b after swapping in main function is : "<<a<<" "<<b<<endl;
}












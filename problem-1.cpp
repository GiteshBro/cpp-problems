#include <iostream>

using namespace std;

class calc{
    public:
    
    void add(double a,double b){
        cout<<a+b<<endl;
    }
    
    void sub(double a,double b){
        cout<<a-b<<endl;
    }
    
    void mult(double a,double b){
        cout<<a*b<<endl;
    }
    
    void divs(double a,double b){
        cout<<a/b<<endl;
    }
};

int main()
{
    double a,b;
    string op;
    cin>>a>>b>>op;
    
    calc operations;
    
    if(op=="+"){
        operations.add(a,b);
    }else if(op=="-"){
        operations.sub(a,b);
    }else if(op=="*"){
        operations.mult(a,b);
    }else if(op=="/"){
        operations.divs(a,b);
    }else{
        cout<<"Invalid operations";
    }
    
    return 0;
}

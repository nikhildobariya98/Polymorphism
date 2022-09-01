#include <iostream>
using namespace std;

class A{
    public :
    
    void fun (int a,int b){
        
        cout << "Your Division : "<<a/b;
    }
    
    void fun (int a,int b ,int c){
        
        cout << "Your subtraction of 3 Number : "<< a-b-c;
    }
    
    void fun (int a,int b ,int c,int d ){
        
        cout << "Your Multiplication of 4 Number : "<< a*b*c*d<<endl;    
    }
    void fun (int a,int b ,int c,int d ,int e){
		
        cout << "Your Addition of 5 Number : "<< a+b+c+d+e<<endl;        
    }
};

main() {
    
    int a , b , c , d , e ;
    
    cout << "Enter The Value  A : ";
    cin >> a;
    
    cout << "Enter The Value  B : ";
    cin >> b;
    
    cout << "Enter The Value  C : ";
    cin >> c;
    
    cout << "Enter The Value  D : ";
    cin >> d;
    
    cout << "Enter The Valuen E : ";
    cin >> e;
    
    A arithmetic;
    
    arithmetic.fun(a,b);

}

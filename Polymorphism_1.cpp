#include <iostream>
using namespace std;

class A{
    public :
    
    void fun (int a,int b){
    	
        cout << "Enter Number of 2 (Division) : "<<a/b<<endl;
    }
    void fun (int a,int b ,int c){
    	
        cout << " Enter Number of 3 (subtraction) : "<< a-b-c<<endl;
    }
    void fun (int a,int b ,int c,int d ){
	   
        cout << "Enter Number of 4 (Multiplication) : "<< a*b*c*d<<endl;    
    }
    void fun (int a,int b ,int c,int d ,int e){
    	
        cout << " Enter Number of 5 (Addition) : "<< a+b+c+d+e<<endl;        
    }
};
int main() {	

  A arithmetic;
  
  int a, b, c, d, e;
  cout<<"Enter The 5 number:"<<endl;
  cin >> a >> b >> c >> d >> e;
    
    arithmetic.fun(a, b);
    arithmetic.fun(a, b, c);
    arithmetic.fun(a, b, c, d);
    arithmetic.fun(a, b, c, d, e);
}

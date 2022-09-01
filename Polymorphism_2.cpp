#include <iostream>
using namespace std;

class Cricket {
    public :  	
        int ovr;       
};
class T20Match : Cricket {
    public : 
        
    void t20match1(){
        cout << "Enter The T20 Match Over: ";
        cin >> ovr;
		        
    cout << "T20 Match Over : " << ovr<<endl<<endl;
    }
};
class TestMatch : Cricket {  
    public : 
    
    void testmatch2(){
        cout << "Enter The Test Match Over: ";
        cin >> ovr;

    cout << "Test Match Over : " << ovr<<endl<<endl;
    }
};
int main (){
	
      T20Match t20match;
      TestMatch testmatch;
	   
    t20match.t20match1();
    testmatch.testmatch2();
    
}

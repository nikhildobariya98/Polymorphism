#include <iostream>

using namespace std;

class cricket {
    public :
    	
        int over;       
};

class T20Match : cricket {
    
    public : 
        
    void t20match1(){
        cout << "Enter The T20 Match Over: ";
        cin >> over;
        
        
    cout << "T20 Match Over : " << over<<endl<<endl;
    }
};

class TestMatch : cricket {
    
    public : 
    
    void testmatch1(){
        cout << "Enter The Test Match Over: ";
        cin >> over;
        
        
    cout << "Test Match Over : " << over<<endl<<endl;
    }
};

int main (){
    
      T20Match t20match;
      TestMatch testmatch;

 
    t20match.t20match1();
    testmatch.testmatch1();

    
}

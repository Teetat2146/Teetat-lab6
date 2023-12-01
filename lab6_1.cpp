#include<iostream>
using namespace std;

int main(){
    
    int x =1;
    int even = 0 , odd = 0 ;
    cout << "Enter an integer: ";
    cin >> x;
    while( x != 0)
    {
      
      
      if( x%2 == 0){
          even = even+1;
        }else{
             odd = odd+1;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }          
    
    cout << "#Even numbers = " << even << "\n" ;
    cout << "#Odd numbers = " << odd ;
    return 0;

}
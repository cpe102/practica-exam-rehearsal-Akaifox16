#include<iostream>
using namespace std;

int main(){
    float sum = 0 , x;
    while(true){
        cout << "Enter x: ";        
        cin >> x;
        if(x == 0 ) break;
        if(x > 0) sum += x;
    }
    cout << "sum = " << sum;
}

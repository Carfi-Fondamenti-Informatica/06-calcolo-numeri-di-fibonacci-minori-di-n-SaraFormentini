#include <iostream>
using namespace std;

int main() {
   int  n=0;
   cin>>n;
   int fib1=1, fib2=1, fib3, i=0;

    if(n>=2){
       cout<<fib1<<endl<<fib2<<endl;
       while(i<=(n-2)) {
           i++;
           fib3 = fib1 + fib2;
           if (fib3<=n) {
               cout << fib3 << endl;
           }else{
               break;
           }
           fib1 = fib2;
           fib2 = fib3;
           }
       }
    else if (n==1){
        cout<<fib1<<endl<<fib2<<endl;
    }
   return 0;
}

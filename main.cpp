#include <iostream>
using namespace std;
#include"lib.h"

int main(){
   char let=0;
    cin>>let;
    if(input(let)){
        cout<<let;
    }else{
        cout<<"errore";
    }
    return 0;
}

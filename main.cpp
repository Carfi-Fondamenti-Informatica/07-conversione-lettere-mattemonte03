#include <iostream>
#include"lib.h"
#include"lib.cpp"
using namespace std;

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

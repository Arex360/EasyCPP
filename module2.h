#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
string isPrime(int num){
  int i;
  bool Result = true;
  for(i=2;i<num;i++){
    if(num % i == 0){
        Result = false;
        break;
    }
  }
  if(Result && num != 1){
    return "Prime";
  }
  else{
    return "Not Prime";
  }
}

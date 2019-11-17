#include<iostream>
#include<string>
using namespace std;
int len(string a){
    int c = 0;
    for(int i = 0; i< 1000;i++){
      if(a[i] != '\0'){
        c = c + 1;
      }
      else{
        break;
      }
    }
    return c;
}
string type(int a){
  return "integer"; 
}
string type(string a){
  return "String";
}
string type(double a){
  return "Float";
}
string type(bool a){
  return "Boolean";
}

#include <iostream>
#include <list>
#include "stiva.h"

using namespace std;


int main () {
  St<int> myints;
  St<char> mychar;
  St<string> mystring;

  myints.push(1);
  myints.push(2);
  mychar.push('a');
  mychar.push('b');
  mystring.push("ana");
  mystring.push("maria");

  for(int i=0;i<3;i++){
    cout<<myints.top()<<" ";
    cout<<mychar.top()<<" ";
    cout<<mystring.top()<<" ";
    myints.pop();
    mychar.pop();
    mystring.pop();
  }

  cout<<"Aceasta este o modificare"<<endl;
  
  return 0;
}

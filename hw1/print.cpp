#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  while(1){
    cin >> s; //"while"       { token("KW:while"); }
    cout << "\"" << s << "\"" << "\t\t\t\t" << "{ token(\"KW:" << s << "\"); }"<<endl;
  }
}

#include<iostream>
#include<Windows.h>
using namespace std;
main() {
   string my_str = "Hello World";
   LPTSTR long_string = new TCHAR[my_str.size() + 1]; //define an array with size of my_str + 1
   strcpy(long_string, my_str.c_str());
   cout << "my_str is : " << my_str <<endl;
   cout << "Long String is : " << long_string <<endl;
}
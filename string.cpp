// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s ="shreya"; // creating string statically
    cout<<s<<endl;

    string s2;
    s2= "singh";
    cout<<s2<<endl;
// creating string dynamically
string *sp = new string;
*sp ="rajpoot";
cout<<sp<<endl;
cout<<*sp<<endl;

vector<string> v;
v.push_back(s);
v.push_back("hello");
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
    sort(v[i].begin(),v[i].end());
    cout<<v[i]<<endl;

}



string s3;
//getline(cin, s3);
//cout<<s3<<endl;
s3 ="abcdefgh";
 cout<<s3[1]<<endl;
 s3[0]='d';
 cout<<s3<<endl;

 string s4 = s3+s2;
 cout<<s2;
 cout<<s3;
 cout<<s4;
return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s ="shreya"; // creating string statically
     cout<<s<<endl;
string *sp = new string;
*sp ="rajpoot";
cout<<sp<<endl;
cout<<*sp<<endl;

vector<string> v;
v.push_back(s);
v.push_back("hello");
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
    sort(v[i].begin(),v[i].end());
    cout<<v[i]<<endl;

}
    string s2;
    s2= "singh";
    cout<<s2<<endl;
// creating string dynamically
string s3;
//getline(cin, s3);
//cout<<s3<<endl;
s3 ="abcdefgh";
 cout<<s3[1]<<endl;
 s3[0]='d';
 cout<<s3<<endl;

// string s4 = s3+s2;
string s4 ="Singhshreya";
 cout<<s2;
 cout<<s3;
 cout<<s4;
 cout<<s4.length()<<endl;
 string s5 = s4.substr(3,5);
 cout<<s5<<endl;
 // find functions
 string s6="defabcabcabc";
 cout<<s6.find("def")<<endl;

 int a =123;
 string s7 = to_string(a);
 cout<<s7<<endl;
 s7[1]='7';
 cout<<s7<<endl;
 s7.push_back('8');
 a =atoi(s7.c_str());
 cout<<a<<endl;


return 0;
}
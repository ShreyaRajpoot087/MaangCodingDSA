// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{  vector<int> * vp = new vector<int>();// dynamic
    vector<int> v; // static
    vector<int> v2(10,-2);
    for(int i= 0;i<v2.size();i++) // intialize and declare the vector with size
    {
        cout<<v2[i]<<endl;
    }
    sort(v2.begin(),v2.end()); // sort the vector
    for(int i=0 ;i<100;i++)
    {
       cout<<"Capacity of Vector "<<v.capacity()<<endl;
        cout<<"Size of the Vector "<<v.size()<<endl;

        v.push_back(i+1);

    }

    /*
    v.push_back(10);
     v.push_back(20);
      v.push_back(30);
       v.push_back(40);
        v.push_back(50);
         v.push_back(60);
         v.pop_back();
         //v[2]=100;
         //v[3] =200;
         // never user [] to insert elements

    /*cout<<v[0]<<endl;
     cout<<v[1]<<endl;
      cout<<v[2]<<endl;
       cout<<v[3]<<endl;
        cout<<v[4]<<endl;
         cout<<v[5]<<endl;

         //cout<<v.at(4)<<endl;
         for(int i= 0;i<v.size();i++)
         {
             cout<<v[i]<<endl;

         }

         */

    return 0;
}
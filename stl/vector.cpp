#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> v(10);

for(int i=0;i<v.size();i++)
{
    v[i]=i*10;
}

/*
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}
*/

cout<<v.empty()<<endl;
cout<<v.size()<<endl;
v.push_back(-1);
cout<<v[10]<<endl;

v.resize(15);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}

//copy v1 to v
 vector<int> v1(v);

 //copy v1 to v
  //vector<int> v1=v;
}

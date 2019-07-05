#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int> d(5);

for (int i=0;i<5;i++){
    d[i]=i+1;
}

d.push_back(22);
d.push_front(33);

for (int i=0;i<7;i++){
    cout<<d[i]<<endl;
}

}

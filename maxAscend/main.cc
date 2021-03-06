#include <iostream>
#include <iomanip>

#include "maxAscend.h"
using namespace std;

void print(vector<int> v){
  int len = v.size();
  for(int i=0;i<len;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
  vector<int> v;
  string cmd;
  int num;
  MaxAsc m;
  while(cin>>cmd){
    istringstream iss{cmd};
    if(iss>>num){
      v.emplace_back(num);
    }else if(cmd=="clear"){
      v.erase(v.begin(),v.end());
    }else if(cmd=="show"){
      print(v);
    }else if(cmd=="n"){
      cout<<m.getMax(v)<<endl;
    }else if(cmd=="v"){
      int result=m.getMaxV(v);
      int start=result/100;
      int end=result-start*100;
      for(int i=start;i<=end;i++){
	cout<<v[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}

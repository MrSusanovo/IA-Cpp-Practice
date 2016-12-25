#include <iostream>
#include <vector>
#include <iomanip>
#include "mergeSort.h"
using namespace std;

int main(){
  string cmd;
  vector<int> store;
  MergeSort m;
  int num;
  while(cin>>cmd){
    istringstream iss{cmd};
    if(iss>>num){
      store.emplace_back(num);
    }else if(cmd=="clear"){
      store.erase(store.begin(),store.end());
    }else if(cmd=="show"){
      for(int i:store){
	cout<<i<<" ";
      }
      cout<<endl;
    }else if(cmd=="sort"){
      m.mergeSort(store);
    }
  }
  return 0;
}

#include "maxAscend.h"
using namespace std;

int MaxAsc::getMax(const vector<int> &v){
  int last=v[0];
  int max=0;
  int diff=0;
  int len=v.size();
  for(int i=0;i<len;i++){
    if(v[i]>last){
      diff=v[i]-last;
    }else{
      last=v[i];
    }
    if(diff>max) max=diff;
  }
  return max;
}

int MaxAsc::getMaxV(const vector<int> &v){
  int start=0;
  int fake=0;
  int end=0;
  int diff=0;
  int max=0;
  int len=v.size();
  for(int i=0;i<len;i++){
    if(v[i]>v[fake]){
      diff=v[i]-v[fake];
      if(diff>max){
	max=diff;
	start=fake;
	end=i;
      }
    }else{
      fake=i;
    }
  }
  return end*100+fake;
}

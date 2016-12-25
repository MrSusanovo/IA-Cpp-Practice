#include <iostream>
#include "mergeSort.h"
using namespace std;

//public:
void MergeSort::mergeSort(vector<int> &v){
  int len=v.size();
  sort(v,0,len-1);
}

//private

void MergeSort::sort(vector<int> &v,int start,int end){
  //divide
  //cout<<start<<" "<<end<<endl;
  if((end-start)<=1){
    if(v[end]<v[start]) swap(v[end],v[start]);
  }else{
    int mid=start+((end-start)/2);
    sort(v,start,mid);
    sort(v,mid+1,end);
    merge(v,start,mid,mid+1,end);
  }
}


void MergeSort::merge(vector<int> &v,
		      int start,int mid,
		      int mid1,int end)
{
  vector<int> left(mid+1-start,1);
  vector<int> right(end+1-mid1,1);
  for(int i=0;i<mid+1-start;i++){
    left[i]=v[start+i];
  }
  for(int i=0;i<end-mid;i++){
    right[i]=v[mid1+i];
  }
  int L=0;
  int R=0;
  for(int i=start;i<=end;i++){
    if(R==end+1-mid1||((L<(mid1-start)) && left[L]<right[R])){
      v[i]=left[L];
      L+=1;
    }else{
      v[i]=right[R];
      R+=1;
    }
  }
}

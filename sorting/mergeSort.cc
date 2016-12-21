#include "mergeSort.h"
using namespace std;
//public:
void MergeSort::mergeSort(vector<int> &v){
  int len=v.size();
  sort(v,0,len-1);
}

void MergeSort::mergeSort(int *a, int len){
  sort(a,0,len-1);
}

//private
void MergeSort::sort(int *a,int start,int end){
  if((end-start)<=1){
    if(a[end]<v[start]) swap(a[end],a[start]);
  }else{
    int mid=(end-start)/2;
    sort(a,start,mid);
    sort(a,mid+1,end);
    merge(a,start,mid,end);
  }
}

void MergeSort::sort(vector<int> &v,int start,int end){
  //divide
  if((end-start)<=1){
    if(v[end]<v[start]) swap(v[end],v[start]);
  }else{
    int mid=(end-start)/2;
    sort(v,start,mid);
    sort(v,mid+1,end);
    merge(v,start,mid,mid+1,end);
  }
}

void MergeSort::merge(int *a,int start,int mid, int end){
  int left[mid+1-start];
  int right[end-mid];
  for(int i=0;i<mid+1-start;i++){
    left[i]=a[start+i];
  }
  for(int i=0;i<end-mid;i++){
    right[i]=a[mid+1+i];
  }
  int L=0;
  int R=0;
  for(int i=mid;i<=end;i++){
    if(L==mid+1-start) break;
    if(R==end-mid){
      a[i]=left[L];
      L++;
    }else if(left[L]<right[L]){
      L++;
    }else{
      a[i]=right[R];
      R++;
    }
  }
}

void MergeSort::merge(vector<int> &v,
		      int start,int mid,
		      int mid1,int end)
{
  vector<int> left(mid+1-start);
  vector<int> right(end+1-mid1);
  for(int i=0;i<mid+1-start;i++){
    left[i]=v[start+i];
  }
  for(int i=0;i<end-mid;i++){
    right[i]=v[mid1+i];
  }
  int lindex=0;
  int rindex=0;
  for(int i=start;i<=end;i++){
    if(lindex==mid+1-start) break;
    if(rindex==end+1-mid1){
      v[i]=left[lindex];
      lindex+=1;
    }else if(left[lindex]<right[rindex]){
      lindex+=1;
    }else{
      v[i]=right[rindex];
      rindex+=1;
    }
  }
}

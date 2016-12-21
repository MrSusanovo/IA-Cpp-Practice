#ifndef __MSORT_H__
#define __MSORT_H__

#include <vector>

class MergeSort{
  void sort(std::vector<int> &v,int start,int end);
  void sort(int *a,int start, int end);
  void merge(std::vector<int> &v,
	     int start,int mid,
	     int mid1,int end);
  void merge(int *a,int start,int mid,int end);
 public:
  void mergeSort(std::vector<int> &v);
  void mergeSort(int *a);
}
#endif

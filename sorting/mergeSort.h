#ifndef __MSORT_H__
#define __MSORT_H__

#include <vector>

class MergeSort{
  void sort(std::vector<int> &,int,int);
  void merge(std::vector<int> &,int,int,int,int);
 public:
  void mergeSort(std::vector<int> &);
};
#endif

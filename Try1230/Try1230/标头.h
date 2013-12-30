#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H
#include <iostream>


//常量
const int kSize(40);

//类与结构
struct CandyBar {
  char brand[kSize];
  double weight;
  int energy;
};

struct stringy {
  char* str;
  int ct;
};

//内联
inline void showtitle(void) { 
  std::cout<< "C++_Primer_Plus\n" << "    by itAir\n" << "Hello World!\n\n";
}
inline void longline(void) { 
  std::cout<< "________________________________\n\n";
}
inline void longline(const int i) { 
  std::cout<<i<< ".______________________________\n\n"; 
}
//模版
template<typename T>
const T Max5(T a[5]) {
  T maxt = a[0];
  for (int i = 1; i < 5; i++) maxt = a[i]>maxt ? a[i] : maxt;
  return maxt;
}

//全局函数
void OutputChars(char*);
void OutputChars(char*, int);

void FillCandyBar(CandyBar&, const char*, const double, const int);
void ShowCandyBar(const CandyBar&);

void LowerSwap(std::string&);

void StringySet(stringy&, char*);
void StringyShow(stringy&, const int n = 1 );
void StringyShow(const char*, const int n = 1);

//template<> const int Max5(int a[5]);
//template<> const double Max5(double a[5]);
#endif //TRY1230_TRY1230_TRY_H
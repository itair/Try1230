#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H
#include <iostream>

//����
const int kSize(40);

//����ṹ
struct CandyBar {
  char brand[kSize];
  double weight;
  int energy;
};

struct stringy {
  char* str;
  int ct;
};

//����
inline void showtitle(void) { 
  std::cout<< "C++_Primer_Plus\n" << "    by itAir\n" << "Hello World!\n\n";
}
inline void longline(void) { 
  std::cout<< "________________________________\n\n";
}
inline void longline(const int i) { 
  std::cout<<i<< ".______________________________\n\n"; 
}

//ȫ�ֺ���
void OutputChars(char*);
void OutputChars(char*, int);

void FillCandyBar(CandyBar&, const char*, const double, const int);
void ShowCandyBar(const CandyBar&);

void LowerSwap(std::string&);

void StringySet(stringy&, char*);
void StringyShow(stringy&, const int n = 1 );
void StringyShow(const char*, const int n = 1);
#endif //TRY1230_TRY1230_TRY_H
#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H
#include <iostream>
#include <string>

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

struct debts {
  char name[50];
  double amount;
};

//内联
inline void showtitle(void) { 
  std::cout<< "C++_Primer_Plus\n" << "  by itAir\n" << "Hello World!\n";
}
inline void longline(void) { 
  std::cout<< "\n________________________________\n\n";
}
inline void longline(const int i) { 
  std::cout<< "\n" << i << ". _____________________________\n\n"; 
}
//模版
template <typename T>
const T Max5(T a[5]) {
  T maxt = a[0];
  for (int i = 1; i < 5; i++) maxt = a[i]>maxt ? a[i] : maxt;
  return maxt;
}

template <typename T>
T* Maxn(T* ar[], int num) {
  if (!num) return NULL;
  T* maxt = ar[0];
  for (int i = 1; i < num; i++)
    maxt = strlen(ar[i])>strlen(maxt) ? ar[i] : maxt;
  return maxt;
}

template<>
char* Maxn<char>(char* ar[], int num) {
  if (!num) return NULL;
  char* maxt = ar[0];
  for (int i = 1; i < num; i++)
    maxt = strlen(ar[i])>strlen(maxt) ? ar[i] : maxt;
  return maxt;
}
//貌似不支持显示声明??

template <typename T>
const T Maxn(T ar[], int num) {
  if (!num) return NULL;
  T maxt = ar[0];
  for (int i = 1; i < num; i++) 
    maxt = ar[i]>maxt ? ar[i] : maxt;
  return  maxt;
}
//7 
template <typename T>
void ShowArray(T arr[], int n) {
  using namespace std;
  cout << "template A\n";
  for (int i = 0; i < n; i++) 
    cout << arr[i] << ' ';
  cout << endl;  
}

template <typename T> 
void ShowArray(T * arr[], int n) { 
  using namespace std;
  cout << "template B\n";
  for (int i = 0; i < n; i++)  
    cout << *arr[i] << ' '; 
  cout << endl;
}

template <typename T>
const int SumArray(T ar[],int n) {
  using namespace std;
  cout << "template A\n";
  int i(0);
  for(i = 0; i < n; i++) 
    if (ar++ == '\0') break;
  return i;
}

template<typename T> 
const int SumArray(T* ar[], int n) {
  using namespace std;
  cout << "template B\n";
  int i(0);
  for(i = 0; i < n; i++) 
    if (ar++ == '\0') break;
  return i;
};

// 模版重载 与 显示声明

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
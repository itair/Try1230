/*C++ Primer Plus 课后习题 p298 8.8
 by itAir
 Try to use Google C++ programing style    */    

#include "标头.h"
#include <iostream>
#include <string>
#include "ctype.h"
#include <algorithm>
#include <numeric>


static int sTime(0);

using namespace std;

void OutputChars(char* p_ch, int num) {
  sTime++;
  int i = sTime;
  if (0 == num) cout << "Invalide nunmber!\n";
  else while (i--) cout << p_ch << endl;
  return ;
}

void OutputChars(char* p_ch) {
  cout << p_ch << endl; 
  return;
}

void FillCandyBar(CandyBar& cb, const char* str, const double wt, const int en) {
  strcpy_s(cb.brand, str);
  cb.weight = wt;
  cb.energy = en;
  return;
}

void ShowCandyBar(const CandyBar& cb) {
  cout << "CandyBar Brand: " << cb.brand << endl
        << "Weight: " << cb.weight << endl
        << "Engery: " << cb.energy << endl;
  return;
}

void LowerSwap(string& str) { 
  transform(str.begin(), str.end(), str.begin(), toupper);
  return ;
}
//STL 中的几个方法  for_each , replace , transform

void main()
{
  showtitle();
  longline(1);
  //1  
  char str[20] = "Wo lei ge qu!";
  OutputChars(str);
  cout << "______ 0" << endl;
  OutputChars(str, 0);
  cout << "______99" << endl;
  OutputChars(str, 99);
  cout << "______2" << endl;
  OutputChars(str, 2);
  cout << "______10234" << endl;
  OutputChars(str, 10234);
  //函数 多态 和重载
  longline(2);
  //2
  CandyBar cb;
  FillCandyBar(cb, "Millennium Munch", 2.85, 350 );
  ShowCandyBar(cb);
  // 结构体 引用
  longline(3);
  //3
  string upperstr ="What the hell! BY Itair.";
  string & str_alias = upperstr;
  cout << "upperstr : " << upperstr << endl;
  cout << "str_alias : " << str_alias << endl;
  LowerSwap(str_alias);  
  cout << "upperstr : " << upperstr << endl;
  cout << "str_alias : " << str_alias << endl;
  //STL 中的几个方法  for_each , replace , transform

  longline();
  system("pause");
}
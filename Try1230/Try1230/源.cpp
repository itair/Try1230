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

void StringySet(stringy &str, char* pch) {
  str.ct = strlen(pch);
  str.str = new char[str.ct];
  strcpy(str.str, pch);
  return;
}

void StringyShow(stringy& str, const int n) {
  if (n > 0) {    
     int i = n;
    while (i--)  {
      cout  << str.str << str.ct << endl;
    }
  }
  return;
}

void StringyShow(const char* pch, const int n) {
  if (n > 0) {  
    int i = n;
    while (i--)  {
      cout << pch << endl;
    }
  }
  return;
}


void main()
{
  showtitle();
  longline(1);
  //1  
  char str[14] = "Wo lei ge qu!";
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
  //string upperstr ="What the hell! BY Itair.";
  //string & str_alias = upperstr;
  //cout << "upperstr : " << upperstr << endl;
  //cout << "str_alias : " << str_alias << endl;
  //LowerSwap(str_alias);  
  //cout << "upperstr : " << upperstr << endl;
  //cout << "str_alias : " << str_alias << endl;
  //cout << "Enter a string ( q to quit) :";
  //getline(cin, upperstr);
  //while (upperstr != "q") {
  //  LowerSwap(upperstr);
  //  cout << upperstr << endl;
  //  cout << "Next string (q to quit) :";
  //  getline(cin, upperstr);
  //}
  ////STL 中的几个方法  for_each , replace , transform
  longline(4);
  //4
  //stringy beany;
  //char testing[] = "Reality isn't what it used to be.";
  //StringySet(beany, testing);
  //StringyShow(beany);
  //StringyShow(beany, 2);
  //testing[0] = 'D';
  //testing[1] = 'u';
  //StringyShow(testing);
  //StringyShow(testing, 3);
  //StringyShow("Done!");
  //默认参数值 函数重载
  longline(5);
  //5
  int nubset[5] = { 2, 4, 55, 62, 38};
  int maxnub = Max5(nubset);
  cout << "nubset" << ":" << "the max one is : " << maxnub <<endl;
  double nddset[5] = { 1.0, 3.2, 3.6, 1.3, 6.5};
  double maxndd = Max5(nddset);
  cout << "vddset" << ":" << "the max one is : " << maxndd <<endl;
  //模板的简单实现 
  longline(6);
  //6
  int testint[6] = { 1, 2, 3, 4, 5, 0};
  double testdouble[4] = { 0.1, 2.3, 5.2, 9.9};
  char* testpchar[5] = {"Show", "me", "the", "money", "ok?"}; 
  int result_int = Maxn(testint, 6);
  double result_double = Maxn(testdouble, 4);
  
  const char* result_pchar = Maxn(testpchar, 5);
  cout << "Max int is " << result_int << endl
       << "Max double is " << result_double << endl
       << "Longest string is " << result_pchar << endl;
  //&#x8BD5;&#x4E00;&#x8BD5; utf-8 &#x7F16;&#x7801;&#x8F6C;&#x6362;&#x529F;&#x80FD;.
  longline();
  system("pause");
}
/*C++ Primer Plus 课后习题 p298 8.8
 by itAir
 Try to use Google C++ programing style    */    

#include "标头.h"
#include <iostream>

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




  longline();
  system("pause");
}
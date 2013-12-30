#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <tchar.h>
#include <iostream>

//常量

//类与结构

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

//全局函数
void OutputChars(char*);
void OutputChars(char*, int);

#endif //TRY1230_TRY1230_TRY_H
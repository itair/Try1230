#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <tchar.h>
#include <iostream>

//����

//����ṹ

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

#endif //TRY1230_TRY1230_TRY_H
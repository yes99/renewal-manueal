#include <cstring>
#include "CStudent.h"

CStudent::CStudent()
{
   pName=NULL;
   nKoreanScore=0;
   nEnglishScore=0;
   nMathScore=0;
}

CStudent::CStudent(CStudent& _student)
{
   this->pName=new char[strlen(_student.pName)+1]();
   strcpy_s(this->pName,strlen(_student.pName)+1,_student.pName);
   this->nKoreanScore=_student.nKoreanScore;
   this->nEnglishScore=_student.nEnglishScore;
   this->nMathScore=_student.nMathScore;
}

CStudent::~CStudent()
{
   if (pName)
      delete[] pName;
}

char* CStudent::GetName()
{
   return this->pName;
}

int CStudent::GetKoreanScore()
{
   return nKoreanScore;
}

int CStudent::GetEnglishScore()
{
   return nEnglishScore;
}

int CStudent::GetMathScore()
{
   return nMathScore;
}

int CStudent::GetTotal()
{
   return nKoreanScore+nEnglishScore+nMathScore;
}

void CStudent::SetName(char* _pName)
{
   if(pName)
      delete[] pName;

   this->pName = new char[strlen(_pName)+1]();
   strcpy_s(this->pName,strlen(_pName)+1, _pName);
}

void CStudent::SetKoreanScore(int _nKoreanScore)
{
   nKoreanScore=_nKoreanScore;
}

void CStudent::SetEnglishScore(int _nEnglishScore)
{
   nEnglishScore=_nEnglishScore;
}

void CStudent::SetMathScore(int _nMathScore)
{
   nMathScore=_nMathScore;
}

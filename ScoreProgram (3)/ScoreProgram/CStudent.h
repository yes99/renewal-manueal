#pragma once

class CStudent
{
private:
   int nKoreanScore;
   int nEnglishScore;
   int nMathScore;
   char* pName;

public:
   CStudent();
   CStudent(CStudent& _student);
   ~CStudent();

   char* GetName();
   int GetKoreanScore();
   int GetEnglishScore();
   int GetMathScore();
   int GetTotal();

   void SetName(char* _pName);
   void SetKoreanScore(int _nKoreanScore);
   void SetEnglishScore(int _nEnglishScore);
   void SetMathScore(int _nMathScore);

};
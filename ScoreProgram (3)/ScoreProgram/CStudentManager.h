#pragma once

#define MAX_STUDENT_CNT 10

class CStudentManager {
private:
   int nCnt;
   CStudent* pStudent[MAX_STUDENT_CNT];

public:
   CStudentManager();
   ~CStudentManager();

   int GetCount();
   CStudent Retrieve(int _nIndex);
   void Add(CStudent& _student);
   bool Delete(int _nIndex);
   bool Update(int _nIndex, CStudent& _student);
};

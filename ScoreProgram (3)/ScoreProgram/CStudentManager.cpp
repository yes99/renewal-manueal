#include <cstring>
#include "CStudent.h"
#include "CStudentManager.h"
   
CStudentManager::CStudentManager()
{
   nCnt=0;
   for(int i=0;i<MAX_STUDENT_CNT;i++)
   {
      pStudent[i]=NULL;
   }
}

CStudentManager::~CStudentManager()
{
   if(pStudent) 
   { 
      for(int i=0;i<MAX_STUDENT_CNT;i++)
      {
         delete pStudent[i];
         pStudent[i] = NULL;
      }  
   }
}

int CStudentManager::GetCount()
{
   return nCnt;
}

CStudent CStudentManager::Retrieve(int _nIndex)
{
   if(pStudent[_nIndex-1]!=NULL)
      return *pStudent[_nIndex-1];
}

void CStudentManager::Add(CStudent& _student)
{
   pStudent[nCnt]=new CStudent(_student);
   nCnt++;
}

bool CStudentManager::Delete(int _nIndex)
{
   if(_nIndex<1||_nIndex>nCnt)
   {
      return false;
   }

   delete pStudent[_nIndex-1];
   pStudent[_nIndex-1]=NULL;
   
   for(int i=_nIndex;i<nCnt;i++)
   {
      pStudent[i-1]=pStudent[i];
   }
   
   nCnt--;
   return true;
}

bool CStudentManager::Update(int _nIndex,CStudent& _student)
{
   if(_nIndex<1||_nIndex>nCnt)
   {
      return false;
   }
   delete pStudent[_nIndex-1];
   pStudent[_nIndex-1]=new CStudent(_student);
   return true;
}
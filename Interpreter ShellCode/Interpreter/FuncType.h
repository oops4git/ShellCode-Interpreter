#pragma once

#include <windows.h>

typedef void* (WINAPI* pMalloc)(size_t);
typedef void* (WINAPI* pRealloc)(void*, size_t);
typedef void(WINAPI* pFree)(void*);
typedef size_t(WINAPI* pStrlen)(const char*);
typedef long(WINAPI* pStrtol)(const char*, char**, int);
typedef errno_t(WINAPI* pStrcpy_s)(char*, rsize_t, const char*);
typedef int(WINAPI* pSprintf_s)(char*, size_t, const char*, ...);
typedef BOOL(WINAPI* pCloseHandle)(HANDLE);
typedef BOOL(WINAPI* pCreateProcessA)(LPCSTR, LPSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL, DWORD, LPVOID, LPCSTR, LPSTARTUPINFOA, LPPROCESS_INFORMATION);
typedef BOOL(WINAPI* pCreatePipe)(PHANDLE, PHANDLE, LPSECURITY_ATTRIBUTES, DWORD);
typedef BOOL(WINAPI* pReadFile)(HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED);
typedef HANDLE(WINAPI* pFindFirstFileA)(LPCSTR, LPWIN32_FIND_DATAA);
typedef BOOL(WINAPI* pFindNextFileA)(HANDLE, LPWIN32_FIND_DATAA);
typedef BOOL(WINAPI* pFindClose)(HANDLE);
typedef DWORD(WINAPI* pGetFullPathNameA)(LPCSTR, DWORD, LPSTR, LPSTR*);
typedef BOOL(WINAPI* pFileTimeToSystemTime)(FILETIME*, LPSYSTEMTIME);
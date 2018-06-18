#include "loadexecute.h"
#include <windows.h>
#include <QDebug>

typedef void (__stdcall *fvoid_func_void)();


LoadExecute::LoadExecute()
{

}

bool LoadExecute::run(std::string dll_name, std::string void_fun_void)
{
    HINSTANCE hGetProcIDDLL = LoadLibraryA(dll_name.c_str());

    if (!hGetProcIDDLL) {
        qDebug() << "could not load the dynamic library";
        return false;
    }

    // resolve function address here
    fvoid_func_void fun = (fvoid_func_void)GetProcAddress(hGetProcIDDLL, void_fun_void.c_str());
    if (!fun) {
        qDebug() << "could not locate the function";
        return false;
    }

    fun();

    FreeLibrary(hGetProcIDDLL);

    return true;
}

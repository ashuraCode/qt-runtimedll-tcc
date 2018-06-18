#ifndef LOADEXECUTE_H
#define LOADEXECUTE_H

#include <string>


class LoadExecute
{
public:
    LoadExecute();

    static bool run(std::string dll_name, std::string void_fun_void);
};

#endif // LOADEXECUTE_H

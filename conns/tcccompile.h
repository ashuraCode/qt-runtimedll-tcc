#ifndef TCCCOMPILE_H
#define TCCCOMPILE_H

#include <string>


class TccCompile
{
public:
    TccCompile();

    static bool tcc_dll(std::string fileIn, std::string fileOut);
};

#endif // TCCCOMPILE_H

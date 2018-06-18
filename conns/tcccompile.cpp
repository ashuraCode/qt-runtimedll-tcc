#include "tcccompile.h"
#include <QProcess>


TccCompile::TccCompile()
{

}

bool TccCompile::tcc_dll(std::string fileIn, std::string fileOut)
{
    int ret = QProcess::execute("tcc", QStringList {"-o", fileOut.c_str(), "-shared", fileIn.c_str()});
    if (ret!=0) return false;
    return true;
}

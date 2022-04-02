#ifndef CRYPTORANDOMDATAPROVIDER_HH
#define CRYPTORANDOMDATAPROVIDER_HH

#include <qpdf/DLL.h>
#include <qpdf/RandomDataProvider.hh>

class CryptoRandomDataProvider: public RandomDataProvider
{
  public:
    QPDF_DLL
    CryptoRandomDataProvider();
    QPDF_DLL
    virtual ~CryptoRandomDataProvider();

    QPDF_DLL
    virtual void provideRandomData(unsigned char* data, size_t len);

    QPDF_DLL
    static RandomDataProvider* getInstance();
};

#endif // CRYPTORANDOMDATAPROVIDER_HH

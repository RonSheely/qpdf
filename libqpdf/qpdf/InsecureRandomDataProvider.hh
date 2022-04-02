#ifndef INSECURERANDOMDATAPROVIDER_HH
#define INSECURERANDOMDATAPROVIDER_HH

#include <qpdf/DLL.h>
#include <qpdf/RandomDataProvider.hh>

class InsecureRandomDataProvider: public RandomDataProvider
{
  public:
    QPDF_DLL
    InsecureRandomDataProvider();
    QPDF_DLL
    virtual ~InsecureRandomDataProvider();

    QPDF_DLL
    virtual void provideRandomData(unsigned char* data, size_t len);

    QPDF_DLL
    static RandomDataProvider* getInstance();

  private:
    long random();

    bool seeded_random;
};

#endif // INSECURERANDOMDATAPROVIDER_HH

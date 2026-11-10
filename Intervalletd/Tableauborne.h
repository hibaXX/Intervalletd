
#include "Tableau.h"
class Tableauborne :
    public Tableau
{
private:
    double borneinf;
    double bornesup;
public:
    Tableauborne(int, double, double);
    double& operator[](int)const;

};

#include"LaEntidad.h"

class Diadema : public LaEntidad
{
    private:
        float speed;
    public:
       Diadema(float =0.0,float =0.0);
       ~Diadema();
       void SetSpeed();
       float GetSpeed();

};

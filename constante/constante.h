#ifndef CONSTANTE_H
#define CONSTANTE_H

/// @brief 
class Constante
{
    private:
        int value; //Value in private to keep it constant

    public:
        Constante();
        Constante(int value);
        int getValue();
};

#endif // CONSTANTE_H


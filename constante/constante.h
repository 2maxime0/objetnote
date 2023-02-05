class Constante
{
    private:
        int value; //Value in private to keep it constant (and there is no setter of course)

    public:
        Constante();
        Constante(int value);
        int getValue();
};


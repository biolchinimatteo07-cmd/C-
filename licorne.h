using namespace std;
#ifndef LICORNE_H
#define LICORNE_H
#include <string>

class licorne
{
    private:
        string nom;
    public:
        licorne(); //Constrcteur
        ~licorne(); //Destructeur
        void manger(void);
};
#endif
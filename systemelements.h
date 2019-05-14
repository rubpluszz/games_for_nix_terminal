#ifndef SYSTEMELEMENTS_H
#define SYSTEMELEMENTS_H


class systemElements
{
public:
    void clear();
    int fiGameControlInput(int nCarPosition);
    void fvStabilization(int pointVariable);
private:
    bool kbhit();
   int getch();

};

#endif // SYSTEMELEMENTS_H

#ifndef NODO_H
#define NODO_H

class Nodo
{
public:
    //constructor
    Nodo();
    Nodo(int, Nodo* sig);
    Nodo(int);

    //accessors
    int getInfo() const;
    void setInfo(int info);
    Nodo* getSig() const;
    void setSig(Nodo* sig);
    Nodo* getAnt() const;
    void setAnt(Nodo* ant);

protected:
    int info;
    Nodo* sig;
    Nodo* ant;
};

#endif
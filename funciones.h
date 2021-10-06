#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

class articulo {
private:
    int numArt;
    char descri[50];
public:
    //get
    int getNumArt();
    const char *getDescri();

    //set
    void setNumArt(int);
    void setDescri(const char*);
    void cargar();
    void mostrar();




};


#endif // FUNCIONES_H_INCLUDED

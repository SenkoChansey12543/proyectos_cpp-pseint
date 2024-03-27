#ifndef ARRAYS_H_INCLUDED
#define ARRAYS_H_INCLUDED
#endif // ARRAYS_H_INCLUDED



template <typename T>

class Array
{
private:
    T* pointer;
    int tam;
public:
    Array(){pointer = nullptr; tam = 0;}

    Array& operator=(const Array& arr)
    {
        delete[] pointer;
        pointer = new T[arr.tam];
        tam = arr.tam;
        for(int i = 0; i < arr.tam; i++)
        {
            pointer[i] = arr.pointer[i];
        }

        return *this;
    }

    T& operator[](int index)
    {
        if (index >= tam)
        {
            throw out_of_range("Posicion del array no valida.");
        }

        return pointer[index];
    }

    void append(T elemento)
    {
        T* copia = new T[tam + 1];

        for (int i = 0; i < tam; i++) copia[i] = pointer[i];
        delete[] pointer;

        pointer = new T[tam+1];
        for (int i = 0; i < tam; i++) pointer[i] = copia[i];
        delete[] copia;

        tam += 1;
        pointer[tam-1] = elemento;
    }

    int get_size(){return tam;}

    ~Array(){delete[] pointer;}

};

#ifndef ARRAYS_H_INCLUDED
#define ARRAYS_H_INCLUDED
#endif // ARRAYS_H_INCLUDED



template <typename T>

class Array
{
private:
    T* pointer;
    int tam;
    bool save_pointers; // Si el array guarda punteros en lugar de objetos. Util cuando se necesita trabajar directamente con un objeto y no copias.
    bool asignado;

/*void assign_store_type(T elemento)
{
    save_pointers = is_pointer<T>::value;
    asignado = true;
}*/

public:
    Array()
    {
        pointer = nullptr;
        tam = 0;
        save_pointers = false;
        asignado = false;
    }

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

    T operator[](int index)
    {
        if (index >= tam)
        {
            throw out_of_range("Posicion del array no valida.");
        }

        return pointer[index];
    }

    void append(T elemento)
    {
        //if (!asignado) assign_store_type(elemento);

        T* copia = new T[tam + 1];

        for (int i = 0; i < tam; i++) copia[i] = pointer[i];
        delete[] pointer;

        pointer = new T[tam+1];
        for (int i = 0; i < tam; i++) pointer[i] = copia[i];
        delete[] copia;

        tam += 1;
        pointer[tam-1] = elemento;
    }

    void erase_pos(int index)
    {
        if (index >= tam) throw out_of_range("Posicion del array no valida.");

        T* copia = new T[tam - 1];

        int reduce_pos = 0;
        for (int i = 0; i < tam; i++)
        {
            if (i == index)
            {
                i++;
                reduce_pos = 1;
            }

            copia[i-reduce_pos] = pointer[i];
        }

        delete[] pointer;

        pointer = new T[tam-1];
        for (int i = 0; i < tam - 1; i++)
        {
            pointer[i] = copia[i];
        }
        delete[] copia;

        tam -= 1;

    }

    int get_size(){return tam;}

    ~Array(){delete[] pointer;}

};

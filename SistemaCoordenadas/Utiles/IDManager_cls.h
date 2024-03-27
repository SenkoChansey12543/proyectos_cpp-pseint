#ifndef IDMANAGER_CLS_H_INCLUDED
#define IDMANAGER_CLS_H_INCLUDED
#endif // IDMANAGER_CLS_H_INCLUDED

class IDManager
{
private:
    int* IDs;
    int tam;
public:
    IDManager(){tam = 0; IDs = nullptr;}

    int add_id()
    {
        int id = tam;
        tam += 1;

        int* copia = new int[tam];
        for (int i = 0; i < tam-1; i++) copia[i] = IDs[i];

        delete[] IDs;
        IDs = new int[tam];

        for (int i = 0; i < tam; i++) IDs[i] = copia[i];

        IDs[tam-1] = id;
        delete[] copia;

        return id;
    }

    bool has_id(int id)
    {
        for (int i = 0; i < tam; i++)
        {
            if (IDs[i] == id) return true;
        }

        return false;
    }

    void mostrar()
    {
        for (int i = 0; i < tam; i++)
        {
            cout << IDs[i] << endl;
        }
    }

    ~IDManager(){delete[] IDs;}
};

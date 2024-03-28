#ifndef IDMANAGER_CLS_H_INCLUDED
#define IDMANAGER_CLS_H_INCLUDED
#endif // IDMANAGER_CLS_H_INCLUDED

class IDManager
{
private:
    Array<int> IDs;
public:

    int add_id()
    {
        IDs.append(IDs.get_size());

        return IDs.get_size() - 1;
    }

    bool has_id(int id)
    {
        for (int i = 0; i < IDs.get_size(); i++)
        {
            if (IDs[i] == id) return true;
        }

        return false;
    }

    void mostrar()
    {
        for (int i = 0; i < IDs.get_size(); i++)
        {
            cout << IDs[i] << endl;
        }
    }
};

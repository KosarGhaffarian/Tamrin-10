#include <iostream>
#include <string>

using namespace std;


class Kasr
{

public:

    int sourat, makhraj;

 /*Kasr(bool a,int s, int m)
    {
        cout << "Enter sourat: ";
        cin >> s;
        sourat = s;
        cout << "Enter makhraj: ";
        cin >> m;
        makhraj = m;
    }*/س
    Kasr(int s, int m)
    {
        cout << "Enter sourat: ";
        cin >> s;
        sourat = s;
        cout << "Enter makhraj: ";
        cin >> m;
        makhraj = m;
    }


    void sum(Kasr kasr_digar);
    void tafrigh(Kasr digar_tf);
    void zarb(Kasr digar_z);
    void taghsim(Kasr dighar_tgh);
    void show(string esm_kasr)
    {
        if (makhraj == 1)
        {
            cout << esm_kasr << ":" << sourat << endl;
        }
        else if (makhraj == 0)
        {
            cout << "Error/0";
        }
        else
            cout << esm_kasr << ":" << sourat << "/" << makhraj << endl;
    };
};


void Kasr::sum(Kasr kasr_digar)
{
    int s = this -> sourat*kasr_digar.makhraj + kasr_digar.sourat*makhraj;
    int m = this -> makhraj*kasr_digar.makhraj;
    cout << "\nsum: " << s << "/" << m;
};
void Kasr::tafrigh(Kasr digar_tf)
{
    int s = this -> sourat*digar_tf.makhraj - digar_tf.sourat*makhraj;
    int m = this -> makhraj*digar_tf.makhraj;
    cout << "\ntafrigh: " << s << "/" << m;
};
void Kasr::zarb(Kasr digar_z)
{
    int s = this -> sourat*digar_z.sourat ;
    int m = this -> makhraj*digar_z.makhraj;
    cout << "\nzarb: " << s << "/" << m;
};
void Kasr::taghsim(Kasr dighar_tgh)
{
    int s = this -> sourat*dighar_tgh.makhraj;
    int m = this -> makhraj*dighar_tgh.sourat;
    cout << "\ntaghsim: " << s << "/" << m;
};

int main ()
{
    string name;
    Kasr kasr1(0,1);
    Kasr kasr2(0,1);
   // Kasr kasr3(1,0,1);

    name = "kasr1";
    kasr1.show (name);
    name = "kasr2";
    kasr2.show (name);

    kasr1.sum(kasr2);
    kasr1.tafrigh(kasr2);
    kasr1.zarb(kasr2);
    kasr1.taghsim(kasr2);
    return 0;
}

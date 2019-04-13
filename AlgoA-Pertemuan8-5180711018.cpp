#include<iostream>
using namespace::std;

float input(string text)
{
    double angka;
    cout<<" Inputkan Nilai "<<text<<" : "; cin>>angka;
    return angka;
}
void nilai (float dapat)
{
    if(dapat>80)
    {
        cout<<" Anda Dapat Nilai (A) ";
    }
    else if(dapat>60)
    {
        cout<<" Anda Dapat Nilai (B) ";
    }
    else if(dapat>40)
    {
        cout<<" Anda Dapat Nilai (C) ";
    }
    else if(dapat>20)
    {
        cout<<" Anda Dapat Nilai (D) ";
    }
    else if(dapat>0)
    {
        cout<<" Anda Dapat Nilai (E) ";
    }
}

    struct akhir
    {
        double uts,uas,tugas,absen;
        float a,b,c,d;
    };

main()
{
    float dapat;
    akhir nilai1;
    nilai1.uts=input(" UTS ");
    nilai1.uas=input(" UAS ");
    nilai1.tugas=input(" TUGAS ");
    nilai1.absen=input(" ABSENSI ");
    cout<<endl;
    nilai1.a=nilai1.uts*20/100;
    nilai1.b=nilai1.uas*30/100;
    nilai1.c=nilai1.tugas*35/100;
    nilai1.d=nilai1.absen*15/100;
    dapat=nilai1.b+nilai1.a+nilai1.c+nilai1.d;
    cout<<" Hasil Akhir Nilai Anda : "<<dapat<<endl;
    nilai(dapat);
    cout<<endl;
}

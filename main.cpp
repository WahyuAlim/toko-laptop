#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int s=4, r,pos;
    string input;
    string check,e;
    string data_laptop[100]={"toshiba","acer","asus","lenovo"};
    int harga[100]={1000000,2000000,3000000,2500000};
    int pilih;

    do {
        cout<<"toko laptop"<<endl;
        cout<<"\n1.tambah data laptop";
        cout<<"\n2.tampilkan data laptop";
        cout<<"\n3.cari laptop";
        cout<<"\n4.update harga";
        cout<<"\n5.delete data";
        cout<<"\n6.exit\n";
        cout<<"pilihan anda : ";
        cin>>pilih;
        system("cls");
        switch(pilih){
        case 1:
            cout<<"masukan nama laptop : ";
            cin>>data_laptop[s];
            cout<<"masukan harga laptop : ";
            cin>>harga[s];
            s++;
            break;
        case 2:
            cout<<left<<setw(20)<<"nama_laptop"<<setw(15)<<"harga"<<endl;
            cout<<"=========================================================="<<endl;
            for (int a=0;a<s;a++){
                cout<<left<<setw(20)<<data_laptop[a]<<setw(15)<<harga[a]<<endl;
            }
            cout<<endl<<endl;
            break;
        case 3:
            cout<<"Masukan nama laptop yang ingin di cari : ";
            cin>>input;
            check="0";
            for (int a=0;a<s;a++){
                if (input==data_laptop[a]){
                    cout<<"Nama laptop = "<< data_laptop [a]<<endl;
                    cout<<"Harga laptop ="<< harga [a] <<endl<<endl<<endl;
                    check="1";
                    break;

                }
                check="0";
            }
            if (check=="0"){
                cout<<"Data tidak ada"<<endl;
            }
            break;
        case 4:
            cout<<"Masukkan Nama Laptop Yang Ingin Di Update"<<endl;
            cin>>e;
            cout<<"Masukkan Harga Laptop Yang ingin Di Update"<<endl;
            cin>>r;
            check="0";
            for (int w=0;w<s;w++){
                if (e==data_laptop[w]){
                    cout<<"data sebelum di update : "<<endl;
                    cout<<"nama laptop : "<<data_laptop[w]<<endl;
                    cout<<"harga laptop : "<<harga[w]<<endl<<endl;

                    harga[w]=r;


                    cout<<"data setelah di update : "<<endl;
                    cout<<"nama laptop : "<<data_laptop[w]<<endl;
                    cout<<"harga laptop : "<<harga[w]<<endl<<endl;
                check="1";
                }
            }

            if (check=="0"){
                cout<<"data tidak ada \n\n";
            }
            break;
        case 5:
            cout<< "Masukkan Nama Laptop Yang Akan Di hapus"<<endl;
            cin>> e;
            check="0";
            for (int y=0;y<s;y++){
                if(data_laptop[y]==e){
                    check="1";
                    pos=y;
                    break;
                }
                check="0";
            }

            if(check=="0"){
                cout<<"data tidak ditemukan "<<endl<<endl;
            }else{

            for(int a=pos;a<s-1;a++){
                data_laptop[a]=data_laptop[a+1];
            }
            s--;
            }


            break;
        }
    }while (pilih!=6);
    return 0;
}

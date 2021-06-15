#include "SLL.h"

/** Lengkapi dan rubahlah notasi algoritma berikut menjadi file C++ */

void createList(list &L){
/** IS. -
    FS. terbentuk sebuah list di mana, first dari L bernilai NIL */
    first(L) = NIL;
}

void createElement(address &P, string nama, string nim, float ipk){
/** IS. terdefinisi data mahasiswa nama, nim dan ipk
    FS. pointer P berisi alaman alokasi memori sebuah elmList yang berisi data mahasiswa */
    P = new elmList;
    info(P).nama = nama;
    info(P).nim = nim;
    info(P).ipk = ipk;
    next(P) = NIL;
}

void tambahData(list &L, address P){
/** IS. terdefinisi pointer p berisi alamat elmList, dan sebuah list L (L mungkin kosong)
    FS. elmList yang ditunjuk oleh P ditambahkan ke dalam list sebagai data terakhir */
    if (first(L) == NIL){
        first(L) = P;
    }else{
        address Q = first(L);
        while (next(Q)!= NIL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void hapusData(list &L, address &P){
/** IS. terdefinisi sebuah list L (L mungkin kosong)
    FS. P berisi alamat elmList yang pertama, elmList yang ditunjuk oleh P dihapus dari list */
    if (first(L) == NIL){
        P = NIL;
    }else if (next(first(L))==NIL){
        P = first(L);
        first(L) = NIL;
    }else{
        P = first(L);
        first(L) = next(P);
        next(P) = NIL;
    }
}

void lihatList(list L){
/** IS. terdefinisi sebuah list L
    FS. menampilkan setiap nilai yang terdapat pada info di elmList*/
    address P = first(L);
    while (P != NIL){
        cout<<info(P).nim<<"\t"<<info(P).nama<<"\t"<<info(P).ipk<<endl;
        P = next(P);
    }
    cout<<"\n"<<endl;
}

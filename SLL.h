#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

/** Rubahlah notasi algoritma berikut menjadi file C++ */

#define first(A) A.first
#define info(A) A->info
#define next(A) A->next
#define NIL NULL

struct mahasiswa {
    string nama;
    string nim;
    float ipk;
};

typedef mahasiswa infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct list{
    address first;
};

void createList(list &L);
/** IS. -
    FS. terbentuk sebuah list di mana, first dari L bernilai NIL */

void createElement(address &P, string nama, string nim, float ipk);
/** IS. terdefinisi data mahasiswa nama, nim dan ipk
    FS. pointer P berisi alaman alokasi memori sebuah elmList yang berisi data mahasiswa */

void tambahData(list &L, address P);
/** IS. terdefinisi pointer p berisi alamat elmList, dan sebuah list L (L mungkin kosong)
    FS. elmList yang ditunjuk oleh P ditambahkan ke dalam list sebagai data terakhir */

void hapusData(list &L, address &P);
/** IS. terdefinisi sebuah list L (L mungkin kosong)
    FS. P berisi alamat elmList yang pertama, elmList yang ditunjuk oleh P dihapus dari list */

void lihatList(list L);
/** IS. terdefinisi sebuah list L
    FS. menampilkan setiap nilai yang terdapat pada info di elmList*/

#endif // SLL_H_INCLUDED

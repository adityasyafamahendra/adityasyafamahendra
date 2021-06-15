#include "SLL.h"

int main()
{

    /** 1. dekrasikan sebuah single list */
    list L;
    createList(L);

    /** 2. alokasi data mahasiswa dengan nim 123, nama abc, dan ipk 3.5 */
    address P;
    createElement(P, "abc","123",3.5);

    /** 3. tambahkan data ke dalam list */
    tambahData(L,P);

    /** 4. alokasi data mahasiswa dengan nim 456, nama def, dan ipk 0.5 */
    createElement(P, "def","456",0.5);

    /** 5. tambahkan data ke dalam list */
    tambahData(L,P);

    /** 6. alokasi data mahasiswa dengan nim 789, nama ghi, dan ipk 2.5 */
    createElement(P, "ghi","789",2.5);

    /** 7. tambahkan data ke dalam list */
    tambahData(L,P);

    /** **. tampilkan list
        123, abc, 3.5
        456, def, 0.5
        789, ghi, 2.5
    */
    lihatList(L);

    /** 8. alokasi data mahasiswa dengan nim 321, nama xyz, dan ipk 4.0 */
    createElement(P, "xyz","321",4.0);

    /** 9. tambahkan data ke dalam list */
    tambahData(L,P);

    /** 10. hapus data di list */
    hapusData(L,P);

    /** 11. hapus data di list */
    hapusData(L,P);

    /** **. tampilkan list
        789, ghi, 2.5
        321, xyz, 4.0
    */
    lihatList(L);

    /** 12. alokasi data mahasiswa dengan nim 123, nama abc, dan ipk 3.5 */
    createElement(P, "abc","123",3.5);

    /** 13. tambahkan data ke dalam list */
    tambahData(L,P);

    /** 14. alokasi data mahasiswa dengan nim 987, nama klm, dan ipk 2.7 */
    createElement(P, "klm","987",2.7);

    /** 15. tambahkan data ke dalam list */
    tambahData(L,P);

    /** **. tampilkan list
        789, ghi, 2.5
        321, xyz, 4.0
        123, abcm 3.5
        987, klm, 2.7
    */
    lihatList(L);

    /** 16. hapus data di list */
    hapusData(L,P);

    /** 17. hapus data di list */
    hapusData(L,P);

    /** 18. hapus data di list */
    hapusData(L,P);

    /** 19. hapus data di list */
    hapusData(L,P);

    /** 20. hapus data di list */
    hapusData(L,P);

    /** 21. hapus data di list */
    hapusData(L,P);

    /** **. tampilkan list */
    tambahData(L,P);

    return 0;
}

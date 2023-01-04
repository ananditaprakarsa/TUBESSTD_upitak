#include "upitak.h"
#include <iostream>
using namespace std;

int main() {
  mllP List_Bioskop;
  mllC List_Film;

  parent infoBioskop;
  child infoFilm;
  adr_parent p;
  adr_child c;
  adr_child y;
  Create_listP(List_Bioskop);
  Create_listC(List_Film);

  // Inputan Bioskop & Filmnya
  // BIOSKOP 1
  infoBioskop.nama_bioskop = "CGV BEC";
  infoBioskop.lokasi = "Babakan Ciamis";
  infoBioskop.jumlah_studio = 5;
  newElm_parent(infoBioskop, p);
  insertLast_parent(List_Bioskop, p);

  infoFilm.judul_film = "Avatar : Way of Water";
  infoFilm.genre = "Action";
  infoFilm.durasi_tayang = "3 Jam 20 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Pengabdi Setan 2";
  infoFilm.genre = "Horror";
  infoFilm.durasi_tayang = "2 Jam 20 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "KKN di Desa Penari";
  infoFilm.genre = "Horror";
  infoFilm.durasi_tayang = "2 Jam 30 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  // BIOSKOP 2
  infoBioskop.nama_bioskop = "TSM XXI";
  infoBioskop.lokasi = "Jl. Gatot Subroto";
  infoBioskop.jumlah_studio = 6;
  newElm_parent(infoBioskop, p);
  insertLast_parent(List_Bioskop, p);

  infoFilm.judul_film = "Cek Toko Sebelah";
  infoFilm.genre = "Comedy";
  infoFilm.durasi_tayang = "1 Jam 40 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Yo Wis Ben";
  infoFilm.genre = "Comedy";
  infoFilm.durasi_tayang = "1 Jam 50 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Lara Ati";
  infoFilm.genre = "Romance";
  infoFilm.durasi_tayang = "2 Jam 30 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Miracle in Cell No.7";
  infoFilm.genre = "Comedy";
  infoFilm.durasi_tayang = "1 Jam 50 Menit";
  newElm_child(infoFilm, c);
  addRelasi(p, c);

  // BIOSKOP 3
  infoBioskop.nama_bioskop = "CGV Paskal 23";
  infoBioskop.lokasi = "Pasir Kaliki";
  infoBioskop.jumlah_studio = 6;
  newElm_parent(infoBioskop, p);
  insertLast_parent(List_Bioskop, p);

  infoFilm.judul_film = "Lara Ati";
  infoFilm.genre = "Romance";
  infoFilm.durasi_tayang = "2 Jam 30 Menit";
  newElm_child(infoFilm, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Miracle in Cell No.7";
  infoFilm.genre = "Comedy";
  infoFilm.durasi_tayang = "1 Jam 50 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Pengabdi Setan 2";
  infoFilm.genre = "Horror";
  infoFilm.durasi_tayang = "2 Jam 20 Menit";
  newElm_child(infoFilm, c);
  addRelasi(p, c);

  infoFilm.judul_film = "KKN di Desa Penari";
  infoFilm.genre = "Horror";
  infoFilm.durasi_tayang = "2 Jam 30 Menit";
  newElm_child(infoFilm, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Mencuri Raden Saleh";
  infoFilm.genre = "Action";
  infoFilm.durasi_tayang = "2 Jam 15 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  // BIOSKOP 4
  infoBioskop.nama_bioskop = "Cinepolis Istana Plaza";
  infoBioskop.lokasi = "Pasir Kaliki";
  infoBioskop.jumlah_studio = 4;
  newElm_parent(infoBioskop, p);
  insertLast_parent(List_Bioskop, p);

  infoFilm.judul_film = "Ngeri-Ngeri Sedap";
  infoFilm.genre = "Comedy";
  infoFilm.durasi_tayang = "1 Jam 45 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);

  infoFilm.judul_film = "Ivanna";
  infoFilm.genre = "Horror";
  infoFilm.durasi_tayang = "1 Jam 30 Menit";
  newElm_child(infoFilm, c);
  insertLast_child(List_Film, c);
  addRelasi(p, c);
  int choice;
  do {
    cout << "=== MENU FILM DI BIOSKOP X ===" << endl;
    cout << "1. Menampilkan Data Bioskop" << endl;
    cout << "2. Menampilkan Data Film" << endl;
    cout << "3. Menampilkan Apakah Terdapat Bioskop Menayangkan Film Tertentu"
         << endl;
    cout << "4. Menghapus Data Film Pertama" << endl;
    cout << "5. Menampilkan Data Film Genre Horror Pada Bioskop" << endl;
    cout << "6. Menghapus Semua Film di Tiap Bioskop" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih Menu : ";
    cin >> choice;

    cout << endl;
    switch (choice) {
    case 0: {
      cout << "Keluar dari Program.." << endl;
      break;
    }
    case 1: {
      cout << "==========[MENAMPILKAN DATA BIOSKOP]=============" << endl;
      showData_parent(List_Bioskop);
      break;
    }

    case 2: {
      cout << "==========[MENAMPILKAN DATA FILM]=============" << endl;
      showData_child(List_Film);
      int jml = jumlah(List_Film);
      cout << endl;
      cout << "Jumlah Film saat ini : " << jml << endl;

      cout << "==============================================" << endl;
      break;
    }

    case 3: {
      cout << "=[MENAMPILKAN APAKAH BIOSKOP MENAYANGKAN FILM TERTENTU ]="
           << endl;
      adr_parent x = find_parent(List_Bioskop, "CGV BEC");
      adr_child y = find_child(List_Film, x, "Pengabdi Setan 2");
      if (y == NULL) {
        cout << "Bioskop Tidak Menampilkan" << endl;
      } else {
        showData_parentOfX(List_Bioskop, y);
      }
      cout << "==============================================" << endl;
      break;
    }

    case 4: {
      cout << "========[MENGHAPUS DATA FILM PERTAMA]=========" << endl;
      deleteFirst_child(List_Film, y);
      showData_child(List_Film);
      cout << "==============================================" << endl;
      break;
    }

    case 5: {
      cout << "=========[MENAMPILKAN DATA FILM GENRE HORROR PADA "
              "BIOSKOP]========="
           << endl;
      showSomeData(List_Bioskop, List_Film);
      cout
          << "=================================================================";

          break;
    }
    case 6: {

      cout << "=========[MENGHAPUS SEMUA FILM DI TIAP BIOSKOP]========="
           << endl;
      deleteRelasi(List_Film);
      showAllData(List_Bioskop, List_Film);
      cout
          << "================================================================="
          << endl;

      break;
    }
    }
  } while (choice != 0);

  cout << "=[MENAMPILKAN DATA FILM PADA BIOSKOP CGV BEC]=" << endl;
  adr_parent x = find_parent(List_Bioskop, "CGV BEC");
  if (x == nil) {
    cout << "[Data Bioskop tidak ditemukan]" << endl;
  } else {
    showData_childOfX(List_Film, x);
  }

  cout << "========[MENGHAPUS DATA FILM PERTAMA]=========" << endl;
  deleteFirst_child(List_Film, y);
  showData_child(List_Film);
  cout << "==============================================" << endl;

  cout << "=========[MENAMPILKAN DATA FILM GENRE HORROR PADA BISOKOP]========="
       << endl;
  showSomeData(List_Bioskop, List_Film);
  cout << "================================================================="
       << endl;

  cout << "=========[MENGHAPUS SEMUA FILM DI TIAP BIOSKOP ]=========" << endl;
  deleteRelasi(List_Film);
  showAllData(List_Bioskop, List_Film);
  cout << "================================================================="
       << endl;

  return 0;
}

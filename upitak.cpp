#include "upitak.h"
// parent
void Create_listP(mllP &List_parent) {
  first(List_parent) = nil;
  last(List_parent) = nil;
}

void newElm_parent(parent infoP, adr_parent &p) {
  p = new elm_parent;
  infoP(p) = infoP;
  next(p) = nil;
  prev(p) = nil;
}

void insertLast_parent(mllP &List_parent, adr_parent p) {
  if (first(List_parent) == nil && last(List_parent) == nil) {
    first(List_parent) = p;
    last(List_parent) = p;
  } else {
    next(last(List_parent)) = p;
    prev(p) = last(List_parent);
    last(List_parent) = p;
  }
}

void deleteFirst_parent(mllP &List_parent, mllC &List_child, adr_parent &p) {
  p = first(List_parent);
  if (p != nil) {
    first(List_parent) = next(p);
    next(p) = nil;
  } else {
    cout << "List Kosong" << endl;
  }

  adr_child c = first(List_child);
  while (c != nil) {
    if (tht(c) == p) {
      if (c == first(List_child)) {
        deleteFirst_child(List_child, c);
      } else {
        deleteAfter_child(List_child, prev(c), c);
      }
    }
    c = next(c);
  }
}

void showData_parent(mllP List_parent) {
  adr_parent p = first(List_parent);
  if (first(List_parent) == nil) {
    cout << "List Kosong" << endl << endl;
  } else {
    cout << "[Data Bioskop]" << endl;
    while (p != nil) {
      cout << "Nama Bioskop     :  " << infoP(p).nama_bioskop << endl;
      cout << "Lokasi           :  " << infoP(p).lokasi << endl;
      cout << "Jumlah Studio    :  " << infoP(p).jumlah_studio << endl;
      p = next(p);
    }
  }
}

adr_parent find_parent(mllP List_parent, string nama_parent) {
  adr_parent p = first(List_parent);
  while (p != nil) {
    if (infoP(p).nama_bioskop == nama_parent) {
      return p;
    }
    p = next(p);
  }
  return nil;
}

// child
void Create_listC(mllC &List_child) {
  first(List_child) = nil;
  last(List_child) = nil;
}

void newElm_child(child infoC, adr_child &c) {
  c = new elm_child;
  infoC(c) = infoC;
  next(c) = nil;
  prev(c) = nil;
}

void insertLast_child(mllC &List_child, adr_child c) {
  if (first(List_child) == nil) {
    first(List_child) = c;
    last(List_child) = c;
  } else {
    next(last(List_child)) = c;
    prev(c) = last(List_child);
    last(List_child) = c;
  }
}

void deleteFirst_child(mllC &List_child, adr_child &c) {
  c = first(List_child);
  if (c != nil) {
    first(List_child) = next(c);
    next(c) = nil;
  } else {
    cout << "List Kosong" << endl;
  }
}

void showData_child(mllC List_Child) {
  adr_child c = first(List_Child);
  if (first(List_Child) == nil) {
    cout << "List Kosong" << endl << endl;
  } else {
    cout << "[Data Film]" << endl;
    while (c != nil) {
      cout << "Judul Film       :   " << infoC(c).judul_film << endl;
      cout << "Durasi Tayang    :   " << infoC(c).durasi_tayang << endl;
      cout << "Genre            :   " << infoC(c).genre << endl << endl;
      c = next(c);
    }
  }
}

void showData_childOfX(mllC List_Child, adr_parent p) {
  adr_child c = first(List_Child);
  if (first(List_Child) == nil) {
    cout << "List Kosong" << endl << endl;
  } else {
    cout << "[Data Film]" << endl;
    while (c != nil) {
      if (tht(c) == p) {
        cout << "Judul Film       :   " << infoC(c).judul_film << endl;
        cout << "Durasi Tayang    :   " << infoC(c).durasi_tayang << endl;
        cout << "Genre            :   " << infoC(c).genre << endl << endl;
      }
      c = next(c);
    }
  }
}

void showData_parentOfX(mllP List_parent, adr_child c) {
  adr_parent p = first(List_parent);
  if (first(List_parent) == nil) {
    cout << "List Kosong" << endl << endl;
  } else {
    cout << "[Data Bioskop]" << endl;
    while (p != nil) {
      if (tht(c) == p) {
        cout << "Nama Bioskop   : " << infoP(p).nama_bioskop << endl;
        cout << "Lokasi         : " << infoP(p).lokasi << endl;
      }
      p = next(p);
    }
  }
}

adr_child find_child(mllC List_child, adr_parent p, string judul) {
  adr_child c = first(List_child);
  while (c != nil) {
    if (tht(c) == p) {
      if (infoC(c).judul_film == judul) {
        return c;
      }
    }
    c = next(c);
  }
  return nil;
};

void deleteAfter_child(mllC &List_child, adr_child prec, adr_child &c) {
  c = next(prec);
  next(prec) = next(c);
  prev(next(c)) = prec;
  next(c) = nil;
  prev(c) = nil;
}

void deleteFirst_childOfX(mllC &List_child, adr_parent p) {
  adr_child c = first(List_child);
  if (tht(c) == p) {
    deleteFirst_child(List_child, c);
  } else {
    while (tht(c) != p) {
      c = next(c);
    }
    deleteAfter_child(List_child, prev(c), c);
  }
}

// relasi
void addRelasi(adr_parent &p, adr_child &c) {
  if (p != nil && c != nil) {
    tht(c) = p;
  }
}
void deleteRelasi(mllC &List_child) {
  adr_child c = first(List_child);
  while (c != nil) {
    tht(c) = nil;
    c = next(c);
  }
}

void showAllData(mllP List_parent, mllC List_child) {
  adr_parent p;
  adr_child c;

  p = first(List_parent);
  while (p != nil) {
    cout << "[Data Bioskop]" << endl;
    cout << "Nama Bioskop     :  " << infoP(p).nama_bioskop << endl;
    cout << "Lokasi           :  " << infoP(p).lokasi << endl;
    cout << "Jumlah Studio    :  " << infoP(p).jumlah_studio << endl;
    c = first(List_child);
    cout << "[Data Film]" << endl;
    while (c != nil) {
      if (tht(c) == p) {
        cout << "Judul Film       :   " << infoC(c).judul_film << endl;
        cout << "Durasi Tayang    :   " << infoC(c).durasi_tayang << endl;
        cout << "Genre            :   " << infoC(c).genre << endl << endl;
      }
      c = next(c);
    }
    p = next(p);
  }
}

int jumlah(mllC &List_child) {
  adr_child c = first(List_child);
  int i = 0;
  while (c != nil) {
    i++;
    c = next(c);
  }
  return i;
}

void showSomeData(mllP List_parent, mllC List_child) {
  adr_parent p;
  adr_child c;

  p = first(List_parent);
  while (p != nil) {
    cout << "[Data Bioskop]" << endl;
    cout << "Nama Bioskop     :  " << infoP(p).nama_bioskop << endl;
    cout << "Lokasi           :  " << infoP(p).lokasi << endl;
    cout << "Jumlah Studio    :  " << infoP(p).jumlah_studio << endl;
    c = first(List_child);
    cout << "[Data Film]" << endl;
    while (c != nil) {
      if (tht(c) == p) {
        if (infoC(c).genre == "Horror") {
          cout << "Judul Film       :   " << infoC(c).judul_film << endl;
          cout << "Durasi Tayang    :   " << infoC(c).durasi_tayang << endl;
          cout << "Genre            :   " << infoC(c).genre << endl << endl;
        }
      }
      c = next(c);
    }
    cout << "--------------------------" << endl;
    p = next(p);
  }
}

// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <chrono>

using namespace std;

void sonaEkle();
void basaEkle();
void ortayaEkle();

struct Node {
    int deger; 
    Node* sonraki;
}; 

struct LinkedList{ 
    Node* bas; 
    void olustur(); 
    void ekle(int, int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;
}; 

struct ArrayList {
    int* bas; 
    void olustur(); 
    void ekle(int, int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;
}; 

int main()
{
    int iteration = 2000;

    LinkedList * 11 = new LinkedList();
    11->olustur();

    for (int i = 0; i < iteration; i++)
    {
        11->ekle(i, i);
    }

    auto begin1 = std::chrono::high_resolution_clock::now();

    11->ekle(10, 9995);
    count << endl;
    count << endl;

    count << "10 bin elemanlı bir listede:" << endl;

    count << endl;
    auto end1 = std::chrono::high_resolution_clock::now();
    auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
    count << "Dizi ile gerceklemede araya ekleme suresi => " << elapsedl.count() << "nano - saniye" << endl;
    count << endl;

    ArrayList* al = new ArrayList();
    al->olustur();
    for (int i = 0; i < iteration; i++)
    {
        al->ekle(i, i);
    }

    auto begin2 = std::chrono::high_resolution_clock::now();

    al->ekle(10, 9995);

    auto end2 = std::chrono::high_resolution_clock::now();
    auto elapsed2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - begin2);
    count << "Baglantili Liste ile gerceklemede araya ekleme suresi => " << elapsed2.count() << "nano-saniye" << endl;
    count << endl;
    return 0;

}

void sonaEkle() {

}

void basaEkle() {

}

void ortayaEkle() {

}

void LinkedList::olustur() {

}
void ArrayList::olustur() {

}

void LinkedList::ekle(int deger, int sira) {

}
void ArrayList::ekle(int deger, int sira) {

}

void LinkedList::sil(int deger) {

}
void ArrayList::sil(int deger) {

}

void LinkedList::guncelle(int sira) {

}
void ArrayList::guncelle(int sira) {

}

void LinkedList::yazdir() {

}
void ArrayList::yazdir() {

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin

#pragma once
#include "iostream"
#include "string.h"
#include "Component.h"
#include "Graphic.h"
#include "Segitiga.h"
#include "Kotak.h"

using namespace std;

int main()
{
	Segitiga *segitiga1 = new Segitiga();
	segitiga1->setNama("Segitiga1");
	Segitiga *segitiga2 = new Segitiga();
	segitiga2->setNama("Segitiga2");
	
	//Khusus kotak , sebelum nama diberikan deskripsi
	Kotak *kotak1 = new Kotak();
	kotak1->setNama("Kotak1");
	kotak1->setDesc("Ini kotak1");
	Kotak *kotak2 = new Kotak();
	kotak2->setNama("Kotak2");
	kotak2->setDesc("Ini kotak2");


	Graphic *mainGraphic = new Graphic();
	mainGraphic->setNama("Main-Graphic");
	Graphic *subGraphic = new Graphic();
	subGraphic->setNama("Sub-Graphic");
	subGraphic->addComponent(kotak2);

	mainGraphic->addComponent(kotak1);
	mainGraphic->addComponent(segitiga1);
	mainGraphic->addComponent(segitiga2);
	mainGraphic->addComponent(subGraphic);

	mainGraphic->printNama();
	/*
		Akan mencetak

		Main-Graphic
		Ini Kotak1
		Kotak1
		Segitiga1
		Segitiga2
		Sub-Graphic
		Ini Kotak2
		Kotak2


		*Composite dipakai kalau memakai struktur tree agar tidak kompleks 
		*Dipakai ketika objek-objeknya memiliki karateristik dan behaviour yang mirip
		
		+Atau cukup mengubah struktur interfaces nya saja (Semua akses lewat interfaces -> ex : Graphic)
			Contoh : Sebuah window yang memiliki canvas & sub-window dan sub-window tsb memiliki canvas & sub-window lagi
		

		-Terlalu general , jadi susah untuk membuat leaf-nya memiliki ciri khas sendiri
	
	*/
    return 0;
}


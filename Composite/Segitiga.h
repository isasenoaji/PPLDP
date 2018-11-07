#pragma once
class Segitiga
{
public:
	void SetKoordinat(int x, int y);
	void GetKoordinat();
	void SetWarna(string nama);
	string GetWarna();
private:
	int Koordinat[10][10];
	string Warna;
};


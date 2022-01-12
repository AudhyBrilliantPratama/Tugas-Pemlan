#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Tugas Pemlan ADC Audhy Brilliant Pratama 19081010123\n\n\n");

	 //untuk membuat tipe data struct
	typedef char string[256];

	//untuk mengelompokan tipe data tanggal lahir
	typedef struct{
		string Tanggal, Bulan, Tahun;
		}Lahir;
	
	//untuk mengelompokkan tipe data mahsiswa
	typedef struct {
		string NPM, Nama, Jurusan;
		Lahir L;

	char Kelas[1];
	float IPK;
	int Tahun_ajaran;
	
	}Mahasiswa;

 	//nama string atau tempat untuk memasukan data mahasiswa
	Mahasiswa InputDataMahasiswa (Mahasiswa M) {
	
	printf("\tPROGRAM DATA MAHASISWA \n");
	printf("---------------------------------------\n");
	
	printf("\nNama		: ");
	scanf("%[^\n]", &M.Nama);
	
	printf("NPM		: "); 
	scanf("%s", &M.NPM);
	
	printf("Tgl Lahir (HH BB TTTT) \n");
	printf(": ");
	scanf("%s%s%s", &M.L.Tanggal, &M.L.Bulan, &M.L.Tahun);
	
	printf("Jurusan ( _ )	: ");
	scanf("%s[^\n]", &M.Jurusan);
	
	printf("Kelas paralel	: "); 
	scanf("%s", &M.Kelas);
	
	printf("Tahun ajaran	: ");
	scanf("%i", &M.Tahun_ajaran);
	
	printf("IPK		: "); 
	scanf("%f", &M.IPK);
	
	printf("\n\n\n");
	
	return M;
	}

	//untuk menampilkan data inputan mahasiswa
	void TampilkanDataMahasiswa (Mahasiswa M) {
	
	 
	printf("\tDATA MAHASISWA \n");
	printf("------------------------------\n");
	
	printf("\n Nama		: %s\n ", M.Nama);
	
	printf("NPM		: %s\n ", M.NPM);
	
	printf("Tgl Lahir	: %s - %s - %s \n", M.L.Tanggal, M.L.Bulan, M.L.Tahun);
	
	printf("Jurusan		: %s\n ", M.Jurusan);
	
	printf(" Kelas paralel	: %s\n ", M.Kelas);
	
	printf("Tahun ajaran	: %i\n ",M.Tahun_ajaran);
	
	printf("IPK		: %.2f\n ", M.IPK);
	
	printf("\n\n");
	}
	

	Mahasiswa M;
	
	M=InputDataMahasiswa(M);
	TampilkanDataMahasiswa(M);

	return 0;
}









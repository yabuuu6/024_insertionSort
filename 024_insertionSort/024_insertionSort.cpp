#include <iostream>
using namespace std;

int arr[12];
int n;

void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 12) //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> arr[i];                  //Input dari pengguna
    }
}

void insertionSort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }
        arr[j + 1] = temp; //step 5	

        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
            
        }
        cout << "pass " << n - 1 << endl;
        cout << endl;
    }while (i  <= i);

}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;                                         //Output ke layar
}

int main()
{
    input();
	system("pause");
    insertionSort();
	return 0;
}

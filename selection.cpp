int main(){
    int data[7] = (38, 91, 13, 57, 27, 23, 61};
    int n=7, i, 4, temp, kecil;

// mencetak array sebelum terurut
    cout << "Data aval : ";
    for (i=0; i<n; i++) {
        cout << data[i] <<" ";
    }
    cout << endl << endl;

/* http://DTugasAlgoritma. BlogSpot.com */
    for (i=0; i<n-1; i++) {
        kecil = i;
        for (j=itt; j<nz 344) {
            if (data[i] < data[kecil]){
                kecil = j;
        }
    }
/* http://DTugasAlgoritma. BlogSpot.com */
    temp = data[i];
    data[i] = data[kecil];
    data[kecil] = temp;
    cetak(data, i++);
    }

    return 0;
}

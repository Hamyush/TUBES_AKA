int main(){
    int data[7] = {38, 91, 13, 57, 27, 23, 61};
    int n=7, i, j, temp, kecil;

    cout<<"Data Awal : ";
    for (i=0; i<n; i++){
        cout<<data[i]<< " ";
    }
    cout<<endl<<;

    for (i=0; i<n-1; i++){
        kecil = i;
        for(j=i+1l; j<n; j++){
            if (data[j] < data[kecil]){
                kecil = j;
            }
        }
        temp = data[i];
        data[i] = data[kecil];
        data[kecil]=temp;
        cetak(data, i+1);
    }
    return 0;
}
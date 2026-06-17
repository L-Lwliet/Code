using namespace std;

void arrayInput(){
    char arr[5];
    cout<<"Enter the characters: "<<endl;
    for(int i=0; i<5; i++){ //Array input
        cin>>arr[i];
    }
}

void arrayOutput(){
    char arr[5];
    cout<<"Your intputs are: "<<endl;
    for(int i=0; i<5; i++){  //Array output
        cout<<arr[i]<<" ";
    }
}
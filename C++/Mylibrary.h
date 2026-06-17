
using namespace std;
int findMax(int arr[], int size){
    int maxValue = arr[0];
    for(int i=0; i<size; i++){
        if(maxValue<arr[i]){
            maxValue = arr[i];
        }
    }
    arr[2]=1000;
    return maxValue;
}


int abs (int n){
    if(n<0){
        n=-n;
        return n;
    }
    return n;
}

void printArrayChar(char arr[], int size){
     cout<<"Your characters are: ";
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

void inputArrayChar(char arr[], int size){
    cout<<"Enter the characters: ";
     for(int i=0; i<size; i++){
        cin>>arr[i];
     }
}

void printArrayInt(int arr[], int size){
     cout<<"Your integers are: ";
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

void inputArrayInt(int arr[], int size){
    cout<<"Enter the characters: ";
     for(int i=0; i<size; i++){
        cin>>arr[i];
     }
}

float AreaC(float r){
    float areac;
    areac = 3.1416 * r * r;
    return areac;
}

float CircumferenceC(float r1){
    float Cf;
    Cf = 2 * 3.1416 * r1;
    return Cf;
}

float AreaR(float l, float w){
    float arear;
    arear = l*w;
    return arear;
}

float AreaT(float h, float b){
    float areat;
    areat =0.5 * b * h;
    return areat;
}


//Highest number from two arrays
float highestNum(float arr1[], float arr2[], int sizes){
      float h[sizes];
      for(int i=0; i<sizes; i++){
        if(arr1[i]>arr2[i]){
            h[i] = arr1[i];
        }
           else h[i] = arr2[i];
      }
      for (int i=0; i<sizes; i++){
        cout<<h[i]<<endl;;
     }
      return h[sizes];
}


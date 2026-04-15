#include<iostream>
using namespace std;
int main(){
    string input;
    while(true){
	
    cout<<"Enter 7-digit binary number: ";
    cin>>input;

    // Check if input is exactly 7 digits
    if(input.length()!=7){
        cout<<"Only allow 7-digit.";
       continue;
    }

    // Check if input contains only 0s and 1s
   for(int i=0; i<input.length();  i++){
    if(input[i]!='0' && input[i]!='1'){
        cout<<"Only allow 1s and 0s digit.";
        continue;
    }
}


    // Mapping of digits 0-9 in 7-segment binary format
    string digits[10]={
        "1111110", // 0
        "0110000", // 1
        "1001101", // 2
        "1111001", // 3
        "0110011", // 4
        "1011011", // 5
        "1011111", // 6
        "1110000", // 7
        "1111111", // 8
        "1110011"  // 9
    };

    // Compare input with each digit's pattern
    bool found=false;
    for(int i=0; i<10; i++){
        if(input==digits[i]){
            cout<<i;
            found=true;
            break;
        }
    }

    if(!found){
        cout<<"7-Segment only show 0-9 digit.";
    }
    cout<<endl<<endl;
}
    return 0;
}


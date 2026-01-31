#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
 string getpassword(int length){
    string password= "";
    string characters = "qwertyuiopasdfghjklzxcvbnm"
    "QWERTYUIOPASDFGHJKLZXCVBNM"
    "1234567890";
    int charsize = characters.size();
    srand(time(0));
    int randomindex;
    for(int i=0;i<length;i++){
        randomindex = rand()%charsize;
        password += characters[randomindex];
    }
    return password;
 }

  int main(){
    int length;
    cout<<"enter thr lenght of your password ::";
    cin>>length;
    string password = getpassword(length);
    cout<<"generated password::"<<password<<endl;
return 0;

  }

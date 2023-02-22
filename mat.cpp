#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){

////////


cout << "2 roads. A madman is sitting. He speaks the truth once,\n and lies once. If you listen to him, you will be on the right path."<<endl;
cout<< "Once Road way Northern University Bangladesh"<< endl;
cout << "Location Northern University Bangladesh"<<endl;
cout<< "Where Northern University?"<<endl;
cout<< "Direction:"<<endl;
cout<< " 1 = Right Road."<<endl;
cout<< " 0 = Wrong Road."<<endl;
cout<< " Previous = \"Which way did the previous person go?\""<<endl<<endl<<endl;


///////
    int people= 100;
    string a;
    bool tr= true;
    bool fal = false;
  int  j =0;
 //  cin>> people;

  // string st ="Where";

cout<< "Enter person Name: " <<endl;

    for(int i = 1; i <=people ; i++){


        cin>> a;

        if(a=="Previous"){

                if(j!=0){
                        if(j%2!=0){
                    cout <<"Lies, go Road no. " <<fal <<" . So you Want to Reverse direction"<<endl;
                }else if(j%2==0){
                cout <<"The truth, He/She go Road no.- " <<fal <<" . So you Want to Reverse direction"<<endl;
                }
                }else{
                cout<< "No man go there. ";
                }


      break;

    }

    else if(j%2==0){
            cout<<"Mad man Said, Road no. :  " << tr<<endl;

    }else if (j%2!=0){
       cout<< "Mad man Said, Road no. :  "<< fal<<endl;
    }







       j++;
    }













getch();
}

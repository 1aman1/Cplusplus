#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
  string sequence;
  ifstream producingChannel;
  producingChannel.open("temp1.txt", ios::in );
  if( !producingChannel.is_open() )	{
    cerr << "ruined" << endl;
    return 0;
  }

  ofstream consumingChannel; 
  consumingChannel.open("temp2.txt" );
  if( !consumingChannel.is_open() ) {
    cerr << "ruined" << endl;
    return 0;
  }

  while( !producingChannel.eof() ) {
    getline(producingChannel, sequence);
    consumingChannel << sequence << endl;
  }

	consumingChannel.close();
	producingChannel.close();

  cout << "TASK/OPERATION COMPLETED\n";    
  //system("pause");
	return 0;
}

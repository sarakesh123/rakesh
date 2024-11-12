 #include<iostream>
 #include<fstream>
 using namespace std;
 
 bool copyfile(const string& infile,const string& outfile){
 	ifstream input(infile,ios::in);
 	ofstream output(outfile,ios::out);
 	if(!input.is_open()||!output.is_open()){
 		cout<<"error becomes in openning files"<<endl;
 		return false;
 	}
 	/*string line;
 	while(getline(input,line)){
 		output<<line<<endl;
 	}*/
 	char ch;
 	while(input.get(ch)){
 		output<<ch<<endl;
 	}
 	
 	cout<<"file copied successfully"<<endl;
 	return true;
 }
 
 int main(){
 	copyfile("input.txt","output.txt");
 }
 
 	
 

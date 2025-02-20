#include <iostream>
using namespace std;

//tabe namayesh menu
void show(){
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"|        wellcome to Mr-Dv404 program  :)              |"<<endl;
	cout<<"|                                                      |"<<endl;
	cout<<"| [1] Enter student info                               |"<<endl;
	cout<<"| [2] Search Student                                   |"<<endl;
	cout<<"| [3] Sort By Best Gpa Point                           |"<<endl;
	cout<<"| [4] Exit program                                     |"<<endl;
	cout<<"|                                                      |"<<endl;
	cout<<"|        Github : https://github.com/Mr-Dev404         |"<<endl;
	cout<<"--------------------------------------------------------\n"<<endl;
	cout<<">> ";
}

//class daneshamozha

class student{
	float book1,book2,book3,book4,book5,book6,book7,book8,book9,book10;
	int age;
    string family,city;
public:
	int id,code;
	float moadel;
	string name;
	//daryaft moshakhasat
	void get(int i){
		cout<<"Student Id "<<"["<<i+1<<"]"<<" : ";
	    cin>>id;
		cout<<"Student age "<<"["<<i+1<<"]"<<" : ";
		cin>>age;
		cout<<"Student Code : "<<"["<<i+1<<"]"<<" : ";
		cin>>code;
		cout<<"Student Name : "<<"["<<i+1<<"]"<<" : ";
		cin>>name;
		cout<<"Student Family Name : "<<"["<<i+1<<"]"<<" : ";
		cin>>family;
		cout<<"Student City : "<<"["<<i+1<<"]"<<" : ";
		cin>>city;
	}
	//mohasebe moadel
	float ave(float book1,float book2, float book3, float book4, float book5, float book6, float book7, float book8, float book9, float book10){
	return(book1+book2+book3+book4+book5+book6+book7+book8+book9+book10)/10;
	}
	//daryaft nomre
	void books(){
		cout<<"Enter books in order and with distance like [10 11] : ";
		cin>>book1>>book2>>book3>>book4>>book5>>book6>>book7>>book8>>book9>>book10;
		moadel = ave(book1,book2,book3,book4,book5,book6,book7,book8,book9,book10);
		system("cls");
	}
	//namayesh moshakhasat
	void search(int i){
		cout<<"Student Id : "<<id<<endl;
		cout<<"Student Code : "<<code<<endl;
		cout<<"Student Name : "<<name<<endl;
		cout<<"Student Family : "<<family<<endl;
		cout<<"Student City : "<<city<<endl;
		cout<<"student book ["<<i<<"] : "<<book1<<endl;
		cout<<"student book ["<<i<<"] : "<<book2<<endl;
		cout<<"student book ["<<i<<"] : "<<book3<<endl;
		cout<<"student book ["<<i<<"] : "<<book4<<endl;
		cout<<"student book ["<<i<<"] : "<<book5<<endl;
		cout<<"student book ["<<i<<"] : "<<book6<<endl;
		cout<<"student book ["<<i<<"] : "<<book7<<endl;
		cout<<"student book ["<<i<<"] : "<<book8<<endl;
		cout<<"student book ["<<i<<"] : "<<book9<<endl;
		cout<<"student book ["<<i<<"] : "<<book10<<endl;
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"Student Gpa : "<<moadel<<endl;
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"\nwaiting pls.... :0  ";
		sleep(7);
		system("cls");		
	}
};
//moratab sazi
void sort(student stu[],int size){
	cout << "Sorted Students by Moadel Score:\n";
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(stu[i].moadel < stu[j].moadel){
				swap(stu[i],stu[j]);
			}
		}
	}
	for(int i=0;i<size;i++){
		stu[i].search(i);
	}
}

//tabe find karbar

void find(student stu[],int size , int idd){
	bool t=false;
	for(int i=0;i<size;i++){
		if(stu[i].id == idd || stu[i].code == idd){
			cout<<"trying to find ["<<stu[i].name<<"] Student .....\n";
			stu[i].search(i);
			t=true;
		}
	}
	if(t==false){
		cout<<"Student ["<<idd<<"] Not Found ! \n";
	}
}

//main va bakhsh asli

int main(){
	int g,idd,count;
	student stu[10];
	while (true){	
		show();	
		cin>>g;
		switch(g)
		{
			case 1:
				system("cls");
				cout<<"You can add 10 books and add 10 students for GPA ! "<<endl;
				cout<<"\npls waiting :) ....";
				sleep(7);
				system("cls");
				for(int i=0;i<10;i++){
					stu[i].get(i);
					stu[i].books();
				}	
				break;
			case 2:
				system("cls");
				cout<<"Enter Student Id Or Code : ";
				cin>>idd;
				find(stu,10,idd);
				break;
			case 3:
				system("cls");
				sort(stu,10);
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Error!";
		}
	}
		
	}
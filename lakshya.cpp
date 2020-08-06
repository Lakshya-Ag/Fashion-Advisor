#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;
class top_wear
{

	public:
		char s,c[20];
		int age;
			float hg;
			void details_male()
			{
			cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"Enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;
				cout<<"a:M size "<<endl;
				cout<<"b:XL size"<<endl;
				cin>>s;
				switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }	
						break;
						}	
						
				}
			
			}

			void details_female()
			{

			cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;
				cout<<"a:M size "<<endl;
				cout<<"b:XL size"<<endl;
				cin>>s;
				switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }	
						break;
						}	
						
				}
			}


};
class bottom_wear:public top_wear
{

public:
			void details_male1()
			{

				cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;
				cout<<"a:M size "<<endl;
				cout<<"b:XL size"<<endl;
				cin>>s;
				
			switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Van Gail"<<endl;
                    cout<<"2: you can take Psk"<<endl;
                    cout<<"3: you can take AKAAS"<<endl;
                    cout<<"4: you can take SML Origin"<<endl;
                    cout<<"5: you can take Reebok"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Van Gail"<<endl;
                    cout<<"2: you can take Psk"<<endl;
                    cout<<"3: you can take AKAAS"<<endl;
                    cout<<"4: you can take SML Origin"<<endl;
                    cout<<"5: you can take Reebok"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Van Gail"<<endl;
                    cout<<"2: you can take Psk"<<endl;
                    cout<<"3: you can take AKAAS"<<endl;
                    cout<<"4: you can take SML Origin"<<endl;
                    cout<<"5: you can take Rebokk"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take jeans"<<endl;
                    cout<<"2: you can take cigarette pant"<<endl;
                    cout<<"3: you can take frared skirt"<<endl;
                    cout<<"4: you can take palazzo"<<endl;
                    cout<<"5: you can take Legging"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }	
						break;
						}	
						
				}
			}

		void details_female1()
		{
		cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;	
				cout<<"a:M size "<<endl;
				cout<<"b:XL size"<<endl;
				cin>>s;
			
			
				switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                     cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take ethnic wear"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take night wear"<<endl;
                    cout<<"5: you can take sport wear"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                 cout<<"1: you can take T-shirt"<<endl;
                    cout<<"2: you can take slim fit causal shirt"<<endl;
                    cout<<"3: you can take cold wear"<<endl;
                    cout<<"4: you can take ethnic wear "<<endl;
                    cout<<"5: you can take kurtas"<<endl;
                }	
						break;
						}	
						
				}
		}
};
class shoes:public top_wear
{
		public:
			void details_male2()
			{

				cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;
				cout<<"a: sport shoes "<<endl;
				cout<<"b: professional shoes"<<endl;
				cin>>s;
				switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                     cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
                else if (age>15 && age<30)
                {
                  cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
                else if(age>30 && age<70)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                     cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                }
                else if (age>15 && age<30)
                {
                   cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                }
                else if(age>30 && age<70)
                {
                  cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                }	
						break;
						}	
						
				}
			}
			void details_female2()
		{
			cout<<"Tell me your favourite color : "<<endl;
				cin>>c;
				cout<<"Enter your age : "<<endl;
				cin>>age;
				cout<<"enter your height : "<<endl;
				cin>>hg;
				cout<<"Choose one of them..."<<endl;
				cout<<"a: sport shoes "<<endl;
				cout<<"b: professional shoes"<<endl;
					cout<<"a:M size "<<endl;
				cout<<"b:XL size"<<endl;
				cin>>s;
			switch(s)
				{
					case'a':
						{
								if(age>0 && age<=15)
                {
                    cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
                else if (age>15 && age<30)
                {
                 cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
                else if(age>30 && age<70)
                {
                cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Nike"<<endl;
                    cout<<"2: you can take adidas"<<endl;
                    cout<<"3: you can take Rebok"<<endl;
                    cout<<"4: you can take Puma"<<endl;
                    cout<<"5: you can take Jordan"<<endl;
                }
							
						break;	
						}
						case 'b':
						{
							if(age>0 && age<=15)
                {
                     cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                }
                else if (age>15 && age<30)
                {
                  cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                }
                else if(age>30 && age<70)
                {
                	 cout<<"We have suggestion for shoping for u!"<<endl;
                    cout<<"1: you can take Oxford shoe"<<endl;
                    cout<<"2: you can take Derby"<<endl;
                    cout<<"3: you can take Brogu shoe"<<endl;
                    cout<<"4: you can take Monk shoe"<<endl;
                    cout<<"5: you can take Slip-on-shoe"<<endl;
                             }	
						break;
						}	
						
				}
		}


};

int main()
{
  char ch,g;
  top_wear a;
  bottom_wear b;
  shoes  c;
  {
  
  ofstream fout;
	
	char rec[20],vi[30];
 char rec1[100],rec2[100];
	fout.open("Lakshya.txt");
	cout<<"Enter Your name : \n";
	cin.getline(rec,100);
	
     fout<<rec<<endl;
	cout<<"\nEnter your ID Number : ";
	cout.getline("Name-")
	cin.getline(rec1,100);
	
	fout<<rec1<<endl;
	cout<<"\nEnter your Mobile Number : ";
	cin.getline(rec2,100);
	
	fout<<rec2<<endl;
	 cout<<"\nEnter your address : ";
	 cin.getline(vi,100);
	
	 fout<<vi<<endl; 
	
	cout<<"\nData stored in file successfully....."<<endl;;
	fout.close();
	getch();
//	exit(0);
}
char chi='y';
while(chi=='y'||chi=='Y'){

    cout<<"choose any one category"<<endl;
				cout<<"a:Top wear"<<endl;
				cout<<"b:Bottom wear"<<endl;
				cout<<"c:Shoes"<<endl;
				cin>>ch;
				switch(ch)
				{
					case 'a':
						{
							cout<<"You have choosen top wear category"<<endl;
							 cout<<"Choose your gender"<<endl;
							 cout<<"m: for Male"<<endl;
							 cout<<"f: for Female"<<endl;
							 cin>>g;
							 switch(g)
							 {
							 	case 'm':
							 		{
							 			a.details_male();
							 			break;
									 }
									 case 'f':
									 	{
									 		a.details_female();
									 		break;
										 }
							 }
							break;
						}
						case 'b':
							{
								cout<<"You have choosen Bottom wear category."<<endl;
								cout<<"Choose your gender."<<endl;
							 cout<<"m: for Male"<<endl;
							 cout<<"f: for Female"<<endl;
							 cin>>g;
							 switch(g)
							 {
							 	case 'm':
							 		{
							 		  b.details_male1();
							 			break;
									 }
									 case 'f':
									 	{
									 		b.details_female1();
									 		break;
										 }
									}
								break;
							}
							case 'c':
							{
							    cout<<"You have choosen shoes category"<<endl;
    								cout<<"Choose your gender"<<endl;
							 cout<<"m: for Male"<<endl;
							 cout<<"f: for Female"<<endl;
							 cin>>g;
							 switch(g)
							 {
							 	case 'm':
							 		{
							 			c.details_male2();
							 			break;
									 }
									 case 'f':
									 	{
									 		c.details_female2();
				 					 		break;
										 }
									}
								break;
							}
				}
cout<<"\nWant to do more shopping(if yes then press Y otherwise press N):";
cin>>chi;
return 0;
}
}


